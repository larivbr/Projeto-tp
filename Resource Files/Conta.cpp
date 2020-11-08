#include "..\Header Files\Conta.h"

Conta::Conta(Usuario User,const int &senha,const long int & login,const float & saldo, const long int & NumeroDoCartao){
  setUser(User);
  setSenha(senha);
  setLogin(login);
  setNumero_Do_Cartao(NumeroDoCartao);
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
void Conta::setNumero_Do_Cartao(const long int & numeroDoCartao){
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
//Erwerton Olha esta maneira de retorna o endereço
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
  saldo+=valorDoDeposito;
  return true;
}
bool Conta::transferencia(float valorDaTransferencia, int contaDeDestino){
    //implementar a verificação se a conta de destino existe
    //sem ideias atéo momento
    return true;
}
void Conta::imprimir()const{
  cout<<"Saldo: "<<saldo<<endl;
}
Conta::~Conta(){
}
