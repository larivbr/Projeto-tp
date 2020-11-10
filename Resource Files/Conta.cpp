#include "..\Header Files\Conta.h"

Conta::Conta(Usuario user,const int &senha,const long int & login,const float & saldo, const long int & numeroDoCartao){
  setUser(user);
  setSenha(senha);
  setLogin(login);
  setNumeroDoCartao(numeroDoCartao);
  setSaldo(saldo);
}


void Conta::setUser(const Usuario& user){
  this->user = user;
}
void Conta::setSenha(const int & senha){
  this->senha = senha;
}
istream & operator>>(istream & in, Conta & contaAux){

    Usuario userAux;
    int senha;
    // Erwerton sobrecarrega o método ">>" para suportar Usuario
    cout<<"Informe seus dados"<<endl;
    // cin>>userAux;
    cout<<"Informe sua senha"<<endl;
    cin>>senha;
    contaAux.setUser(userAux);
    contaAux.setSenha(senha);
    contaAux.setSaldo(0);
    //Ao criar a conta o usuarios iniciar o saldo sem dinheiro
    return in;
}
bool Conta::signUp(){
      // cin<<(this);
      return true;
}
bool Conta::login(){
    long int  CPF; int senha;
    cout<<"Informe seu CPF:";
    cin>>CPF;
    cout<<"Senha: ";
    cin>>senha;
    //retorna verdadeiro se o login foi aceito
    return verificarDadosDeLogin(CPF, senha);
}
bool Conta::logout(){
  // sem ideias
}
void Conta::setNumeroDoCartao(const long int & numeroDoCartao){
  this->numeroDoCartao = numeroDoCartao;
}
void Conta::setSaldo(const float & saldo){
  this->saldo = saldo;
}


Usuario Conta::getUser()const{
  return user;
}
int Conta::getSenha()const{
  return senha;
}
//Erwerton observe está maneira de retorna o endereço
/*
string Conta::getEnderecoDoUsuario()const{
  return enderecoDoUsuario.rua + "," + enderecoDoUsuario.CEP + "," +enderecoDoUsuario.cidade +","+enderecoDoUsuario.estado;
}
*/
long int Conta::getNumeroDoCartao()const{
  return numeroDoCartao;
}
//Eu acredito que esta função deve ser implementada nas classes bases(ou seja, virtual) ou declarada com friend das duas subclasses pois
//[É] necessário fazer uma busca nas listas de ContaPoupanca e ContaCorrente
// O que vocês acham?
// bool verificarDadosDeLogin(const long int& CPF, const int& senha)const{
//   //
//     if(not(CPF == this->User.getCPF() and senha == getSenha()))
//         return false;
//     return true;
// }
bool Conta::sacar(float valorDoSaque){
  if(valorDoSaque > saldo){
    return false;
  }
  saldo -= valorDoSaque;
  return true;
}
bool Conta::depositar(float valorDoDeposito){
  if(valorDoDeposito < 0){
    return false;
  }
  saldo += valorDoDeposito;
  return true;
}
// bool Conta::transferencia(float valorDaTransferencia, int contaDeDestino){
//     //implementar a verificação se a conta de destino existe
//     //sem ideias até o momento
//     return true;
// }
void Conta::imprimir()const{
  //subrecarrega o método "<<" para suportar Usuario
  cout<<"Dados"<<endl<<Usuario<<endl;
  cout<<"Login: "<<login<<endl;
  cout<<"Cartao: "<<numeroDoCartao<<endl;
  cout<<"Saldo: "<<saldo<<endl;
}
Conta::~Conta(){
}
