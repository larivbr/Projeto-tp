#include <iostream>
#include <fstream>
using namespace std;
#include "..\Resource Files\Conta.cpp"
#include "..\Resource Files\Usuario.cpp"
//Necessário implementação
//#include "..\Resource Files\ContaPoupanca.cpp"
//#include "..\Resource Files\ContaCorrente.cpp"
int main(){
  //Erro, falta de implmentação do Usuario.cpp
  //Padrão de inicialização do construtor de Usuario
   Usuario usuarioAuxTeste(/*Nome*/"Valmir",/*Idade*/21,/*CPF*/15652145,/*Endereço*/{/*RUA*/"qualquer",/*CEP*/"1415454",/*cidade*/"qualquer",/*estado*/"qualquer"});
   Conta contaAuxTeste(usuarioAuxTeste,/*senha*/1231124,/*login possível saida*/32433,/*Saldo*/10000,/*Numero de cartao*/11313);
  //teste dos métodos
  //falta a implementação da sobrecarga
  //cout<<contaAuxTeste<<endl;
   cout<<"Teste getSenha"<<endl;
   cout<<contaAuxTeste.getSenha()<<endl;
   cout<<"Teste getSaldo"<<endl;
   cout<<contaAuxTeste.getSaldo()<<endl;
   cout<<"Teste getNumeroDoCartao"<<endl;
   cout<<contaAuxTeste.getNumeroDoCartao()<<endl;
   cout<<"Teste sacar"<<endl;
   cout<<contaAuxTeste.sacar(10)<<endl;
   cout<<"Teste Saldo"<<endl;
   cout<<contaAuxTeste.getSaldo()<<endl;
   cout<<"Teste depositar"<<endl;
   cout<<contaAuxTeste.depositar(10)<<endl;
   cout<<"Teste saldo"<<endl;
   cout<<contaAuxTeste.getSaldo()<<endl;
   
   return 0;
}
