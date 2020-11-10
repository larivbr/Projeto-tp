#include "..\Header Files\Conta.h"
#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
class ContaPoupanca:public Conta{

    private:

        vector <ContaPoupanca> listaDeContasPoupancas;
        int jurosExtra;
    public:
      
      ContaPoupanca(const Usuario & = {"0",0,0,{"0","0","0","0"}},const int&  = 0,const long int & = 0,const float & = 0,const long int & = 0, const int &);
      bool cadastroUsuario(const ContaPoupanca&);
      void setJurosExtra(const int&);
      void JurosExtra();
      bool salvarDados();
};
#endif
