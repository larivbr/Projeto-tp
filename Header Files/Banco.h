#include "..\Header Files\ContaPoupanca.h"
#include "..\Header Files\ContaCorrente.h"

#ifndef _BANCO_H
#define _BANCO_H
template <class T>
class Banco:public ContaPoupanca, public ContaCorrente{
private:
      vector<T>listaDeContas;
      bool verificarLogin(int, int);
      int encontarConta(int);//Ok
      bool carregarDados();
      fstream arq;
    public:
      Banco();
      bool login(int,int);
      bool signUp(T);//OK
      bool signOut();//
      bool deletarContas(int, int);
      bool modificarDados(int ,int );
      bool ordenarLista();
      bool transferencia(int,int,int, float);
      bool salvarDados();//OK
      void imprimir();//ok
      int menu();
      ~Banco();
};

#endif //_BANCO_H
