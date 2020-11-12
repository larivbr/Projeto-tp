#include "..\Header Files\Conta.h"

Conta::Conta(const Usuario &user,const int &senha,const float & saldo){
  setUser(user);
  setSenha(senha);
  setSaldo(saldo);
}


void Conta::setUser(const Usuario& user){
  this->user = user;
}
void Conta::setSenha(const int & senha){
  this->senha = senha;
}

bool Conta::signUp(){
      cin>>(*this);
      return true;
}
bool Conta::login(){
    long int  CPF; int senha;
    cout<<"Informe seu CPF:";
    cin>>CPF;
    cout<<"Senha: ";
    cin>>senha;
    //retorna verdadeiro se o login foi aceito
    return /*verificarDadosDeLogin(CPF, senha)*/true;
}
bool Conta::logout(){
  // sem ideias
  return true;
}
void Conta::setSaldo(const float & saldo){
  this->saldo = saldo;
}
float Conta::getSaldo()const{
	return saldo;
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
//Eu acredito que esta função deve ser implementada nas classes bases(ou seja, virtual) ou declarada com friend das duas subclasses pois
//[É] necessário fazer uma buscar nas listas de ContaPoupanca e ContaCorrente
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

Conta::~Conta(){
}
