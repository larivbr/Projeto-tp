#include "..\Header Files\Banco.h"
template <class T>
Banco<T>::Banco(){
    arq.open("DadosBanco.bin",ios::in|ios::out);
    if(not(arq.is_open())){
       return;
    }
    carregarDados();
}
template <class T>
bool Banco<T>::login(int CPF, int senha){
  return verificarLogin(CPF, senha);
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
bool Banco<T>::deletarContas(int CPF,int senha){
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
bool Banco<T>::modificarDados(int CPF, int senha){
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
int Banco<T>::encontarConta(int CPF){
  for(int i(0);i < listaDeContas.size();i++){
    if(listaDeContas[i].getCPF() == CPF){
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
template <class T>
bool Banco<T>::transferencia(int CPF1, int senha, int CPF2, float valor){
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
bool Banco<T>::salverDados(){
  arq.seekg(0);
  for(int i(0); i < listaDeContas.size();i++){
    arq.write(reinterpret_cast<char *>(&listaDeContas[i]),sizeof(listaDeContas[i]));
  }
  return true;
}

template <class T>
bool Banco<T>::carregarDados(){
  int i(0);
  while(arq.read(reinterpret_cast<char *>(&listaDeContas[i]),sizeof(listaDeContas[i++])));
  return true;
}
