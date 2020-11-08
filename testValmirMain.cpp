#include <iostream>
#include <fstream>
using namespace std;
#include ".\Source Files\Conta.cpp"
#include ".\Header Files\ContaPoupanca.h"
int main(){
    Endereco p = {"13737838374","Alagoas","Arapiraca","rt"};
    Conta *b = new ContaPoupanca("Valmir Ferreira da Silva",1289373876,21,300000,p);
    b->imprimir();
    b->sacar(1000);
    b->imprimir();
    b->depositar(1000);
    b->imprimir();
}
