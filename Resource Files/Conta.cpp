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
void Conta::setLogin(const long int & login){
  this->login = login;
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
long int Conta::getLogin()const{
  return login;
}
long int Conta::getNumeroDoCartao()const{
  return numeroDoCartao;
}

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
bool Conta::transferencia(float valorDaTransferencia, int contaDeDestino){
    //implementar a verificação se a conta de destino existe
    //sem ideias até o momento
    return true;
}
void Conta::imprimir()const{
  //Implemente a função imprimir da class Usuário
  //Usuario::user.imprimir();
  cout<<"Login: "<<login<<endl;
  cout<<"Cartao: "<<numeroDoCartao<<endl;
  cout<<"Saldo: "<<saldo<<endl;
}
Conta::~Conta(){
}
