#include<iostream>
#include<fstream>
#include <vector>
#include<algorithm>
#include<iomanip>
using namespace std;
#include "..\Resource Files\Usuario.cpp"
#include "..\Resource Files\Banco.cpp"
#include "..\Resource Files\Conta.cpp"
#include "..\Resource Files\ContaPoupanca.cpp"
#include "..\Resource Files\ContaCorrente.cpp"
#include "..\Resource Files\Overload.cpp"
int main(){
    Banco <Conta>p;
    Usuario userAux;
    Conta contaAux;
    // p.menu();
    // // Usuario usuarioAuxTeste1(/*Nome*/"Valmir F",/*Idade*/21,/*CPF*/2,/*Endereço*/{/*RUA*/"qualquerRua",/*CEP*/"1415454CEP",/*cidade*/"qualquerCidade",/*estado*/"qualquerEstado"});
    // // Usuario usuarioAuxTeste2(/*Nome*/"Erwerton",/*Idade*/18,/*CPF*/2,/*Endereço*/{/*RUA*/"qualquerRua",/*CEP*/"1415454CEP",/*cidade*/"qualquerCidade",/*estado*/"qualquerEstado"});
    // // Conta contaAuxTeste1(usuarioAuxTeste1,/*senha*/1,/*login possível saida*/4,/*Saldo*/10000,/*Numero de cartao*/11313);
    // // Conta contaAuxTeste2(usuarioAuxTeste2,/*senha*/2,/*login possível saida*/5,/*Saldo*/10000,/*Numero de cartao*/11313);
    // // p.signUp(contaAuxTeste1);
    // // p.signUp(contaAuxTeste2);
    // cout<<p.login(15652145,1231124)<<endl;
    // p.imprimir();
    // p.salvarDados();
    while(true){
      int op = p.menu();
      switch (op) {
        case 1:
          cout<<"Insira os dados da sua conta"<<endl;
          cin>>userAux;
          cin>>contaAux;
          contaAux.setUser(userAux);
          p.signUp(contaAux);
          cout<<"Conta criada"<<endl;
        break;
      }
    }


  return 0;
}
