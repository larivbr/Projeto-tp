#include "..\Header Files\Usuario.h"
#ifndef _CONTA_H
#define _CONTA_H
class Conta{

  private:

      Usuario user;
      int senha; //senha feita apenas de numeros
      long int login; // login apenas compostos por numeros//possível mudança
      float saldo;
      //Eu acredito que esta função(verificarDadosDeLogin) deve ser implementada nas classes bases(ou seja, virtual), ou declarada com friend das duas subclasses, pois
      //é necessário fazer uma busca nas listas de ContaPoupanca e ContaCorrente
      // O que vocês acham?
      // bool verificarDadosDeLogin(const long int& , const int &)const;
      long int numeroDoCartao;//possível mudança

  public:
      Conta(Usuario = {"0",0,0,{"0","0","0","0"}},const int&  = 0,const long int & = 0,const float & = 0,const long int & = 0);

      void setUser(const Usuario &);
      void setSenha(const int&);
      void setNumeroDoCartao(const long int &);
      void setSaldo(const float &);

      Usuario getUser()const;
      int getSenha()const;
      float getSaldo()const;
      long int getNumeroDoCartao()const;

      //sobrecarrga do operador >> para ajudar nos cadastros
      friend istream &operator>>(istream &, Conta &);
      bool signUp();
      bool login();
      //sem ideias
      bool logout();
      bool sacar(float);
      bool depositar(float);
      //como o dinheiro pode ir de uma conta poupança ara uma conta corrente e vice-versa
      //pode ser uma função friend das duas subclasses
      // bool transferencia(float, int);

      void imprimir()const;
      //E necessário ser virtual?
      // virtual bool salvarDados();
      // virtual bool cadastroUsuario();
      ~Conta();
};
#endif //_Conta_H
