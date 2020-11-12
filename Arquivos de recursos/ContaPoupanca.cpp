#include "ContaPoupanca.h"


ContaPoupanca::ContaPoupanca(const Usuario &,const float & saldo, const int & jurosExtra{
  setUser(user);
  setSenha(senha);
  setLogin(login);
  setNumeroDoCartao(numeroDoCartao);
  setSaldo(saldo);
}
//SALVAR DADOS
/*
ContaPoupanca::~ContaPoupanca()
{
    salvarDados();
}
*/

void ContaPoupanca::setJurosExtra (const int & jurosExtra)
{
    this-> jurosExtra = jurosExtra;
}

//JUROS QUE A CONTA RENDE
//O JUROS É DETERMINADO EM R$ E NÃO EM %
void ContaPoupanca::JurosExtra(float jurosExtra)
{
    jurosExtra -= saldo;
}
