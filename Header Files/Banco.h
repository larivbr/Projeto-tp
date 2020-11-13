#include "..\Header Files\ContaPoupanca.h"
#include "..\Header Files\ContaCorrente.h"

#ifndef _BANCO_H
#define _BANCO_H
template <class T>
class Banco:public ContaPoupanca, public ContaCorrente{
private:
      vector<T>listaDeContas;
      bool verificarLogin(long int, int);
      int encontarConta(long int);//Ok
      bool carregarDados();
      fstream arq;
    public:
      Banco();
      bool login(long int,int);
      bool signUp(T);//OK
      bool signOut();//
      bool deletarContas(long int, int);
      bool modificarDados(long int ,int );
      bool ordenarLista();
      bool transferencia(long int,int,long int, float);
      bool salvarDados();//OK
      void imprimir();//ok
      int menu();
      ~Banco();
};

#endif //_BANCO_H
