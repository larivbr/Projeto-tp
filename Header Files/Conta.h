#include "..\Header Files\Usuario.h"
#ifndef _CONTA_H
#define _CONTA_H
class Conta{

  private:

      Usuario user;
      int senha; //senha feita apenas de numeros
      long int login; // login apenas compostos por numeros
      float saldo;
      long int numeroDoCartao;

  public:
      Conta(Usuario = {"0",0,0,{"0","0","0","0"}},const int&  = 0,const long int & = 0,const float & = 0,const long int & = 0);

      void setUser(const Usuario &);
      void setSenha(const int&);
      void setLogin(const long int&);
      void setNumeroDoCartao(const long int &);
      void setSaldo(const float &);

      Usuario getUser()const;
      int getSenha()const;
      long int getLogin()const;
      float getSaldo()const;
      long int getNumeroDoCartao()const;

      bool sacar(float);
      bool depositar(float);
      bool transferencia(float, int);

      void imprimir()const;
      //E necessário ser virtual?
      // virtual bool salvarDados();
      // virtual bool cadastroUsuario();
      ~Conta();
};
#endif //_Conta_H
