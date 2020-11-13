#include "..\Header Files\Banco.h"
template <class T>
Banco<T>::Banco(){
    arq.open("DadosBanco.bin",ios::in);
    if(not(arq.is_open())){
      cout<<"Arquivo inexistente"<<endl;
       return;
    }
    carregarDados();
    imprimir();
    arq.close();
}
template <class T>
bool Banco<T>::login(long int CPF, int senha){
  return verificarLogin(CPF, senha);
}
template <class T>
bool Banco<T>::verificarLogin(long int CPF, int senha){
    int idConta(encontarConta(CPF));
    if(listaDeContas[idConta-2].getSenha() == senha){
      return true;
    }
    return false;
}
template <class T>
bool Banco<T>::signUp(T contaGenerica){
  listaDeContas.push_back(contaGenerica);
  return true;
}
template <class T>
bool Banco<T>::signOut(){
  salvarDados();
  return 0;
}
template <class T>
bool Banco<T>::deletarContas(long int CPF,int senha){
  if(not(verificarLogin(CPF,senha)))
    return false;

    int idConta(encontarConta(CPF));
    if(idConta){
      listaDeContas.erase(idConta,idConta+1);
      return true;
    }
  return false;
}
template <class T>
bool Banco<T>::modificarDados(long int CPF, int senha){
  if(not(verificarLogin(CPF,senha)))
    return false;
  int idConta(encontarConta(CPF)-1);
  if(idConta){
    //
    //Preciso de um método para midificar os atributos da conta
    //
    return true;
  }
  return false;
}
template <class T>
int Banco<T>::encontarConta(long int CPF){
  for(int i(0);i < listaDeContas.size();i++){
    if(listaDeContas[i].getUser().getCPF() == CPF){
        return i+2;
    }
  }
    return 1;
}
template <class T>
bool Banco<T>::ordenarLista(){
  sort(listaDeContas.begin(),listaDeContas.end());
  return true;
}
//
template <class T>
bool Banco<T>::transferencia(long int CPF1, int senha, long int CPF2, float valor){
    if(not(verificarLogin(CPF1,senha)))
      return false;
    int idConta1(encontarConta(CPF1));
    int idConta2(encontarConta(CPF2));
    if(idConta1 and idConta2 != 0){
      listaDeContas[idConta1-2].sacar(valor);
      listaDeContas[idConta2-2].depositar(valor);
      return true;
    }
    return false;
}

template <class T>
bool Banco<T>::salvarDados(){
  cout<<"Salvando..."<<endl;
  //
  arq.open("DadosBanco.bin",ios::out);
  if(!arq.is_open())
    cout<<"Falhar ao abrir"<<endl;
  for(int i(0); i < listaDeContas.size();i++){
    T auxTemp = listaDeContas[i];
    arq.write(reinterpret_cast<char *>(&auxTemp),sizeof(T));
  }
  arq.close();
  return true;
}

template <class T>
bool Banco<T>::carregarDados(){
  //cout<<"Carregando"<<endl;
  arq.open("DadosBanco.bin",ios::in);
  int i(0);
  T auxTemp ;
  while(arq.read(reinterpret_cast<char *>(&auxTemp),sizeof(T))){
  //  cout<<" I"<<i++<<endl;
    listaDeContas[i] = auxTemp;
  }
  arq.close();
  return true;
}
template <class T>
void Banco<T>::imprimir(){
  for(int i(0); i < listaDeContas.size(); i++){
    cout<<"Nome:"<<listaDeContas[i].getUser().getNomeDoUsuario()<<endl;
    cout<<"Idade: "<<listaDeContas[i].getUser().getIdade()<<endl;
    cout<<"CPF: "<<listaDeContas[i].getUser().getCPF()<<endl;
    cout<<"Saldo: "<<listaDeContas[i].getSaldo()<<endl;
    cout<<"Senha: "<<listaDeContas[i].getSenha()<<endl;
  }
}
template <class T>
Banco<T>::~Banco(){
  arq.close();
}
template <class T>
int Banco<T>::menu(){
  int op;
  cout.fill('_');
  cout<<setw(40)<<" "<<endl;
  cout<<"Bem vindo"<<endl;
  cout<<setw(40)<<" "<<endl;
  cout<<"[1]Criar Conta"<<endl;
  cout<<"[2]Entrar"<<endl;
  cout<<"[3]Sair"<<endl;

  cout<<setw(40)<<" "<<endl;
  cin>>op;
  return op;
}
