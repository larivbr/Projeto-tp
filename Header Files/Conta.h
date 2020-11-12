#include "..\Header Files\Usuario.h"
#ifndef _CONTA_H
#define _CONTA_H
class Conta{

  private:
      Usuario user;
      int senha; //senha feita apenas de numeros
      float saldo;

  public:
      Conta(const Usuario & = {"0",0,0,{"0","0","0","0"}},const int &  = 0,const float & = 0);

      void setUser(const Usuario &);
      void setSenha(const int&);
      void setNumeroDoCartao(const long int &);
      void setSaldo(const float &);

      Usuario getUser()const;
      int getSenha()const;
      float getSaldo()const;
      long int getNumeroDoCartao()const;

      //sobrecarregar do operador >> para ajudar nos cadastros
      friend istream &operator>>(istream &, Conta &);
      friend ostream &operator<<(ostream &, Conta &);
      bool signUp();
      bool login();
      //sem ideias
      bool logout();
      bool sacar(float);
      bool depositar(float);
      //como o dinheiro pode ir de uma conta poupança para uma conta corrente e vice-versa
      //pode ser uma função friend das duas subclasses
      // bool transferencia(float, int);

      //E necessário ser virtual?
      // virtual bool salvarDados();
      // virtual bool cadastroUsuario();
      ~Conta();
};
#endif //_Conta_H
