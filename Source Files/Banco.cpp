#include<iostream>
#include<fstream>
#include <vector>
#include<algorithm>
using namespace std;
#include "..\Resource Files\Usuario.cpp"
#include "..\Resource Files\Banco.cpp"
#include "..\Resource Files\Conta.cpp"
#include "..\Resource Files\ContaPoupanca.cpp"
#include "..\Resource Files\ContaCorrente.cpp"
int main(){
    ContaPoupanca a;
    ContaCorrente c;
    Conta s;
    //Problema
    Banco <ContaPoupanca>b;
    Usuario use;
  return 0;
}
