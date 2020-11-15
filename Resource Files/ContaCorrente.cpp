#include "ContaCorrente.h"


ContaCorrente::ContaCorrente(const Usuario &user,const int &senha,const long int & login,const float & saldo, const long int & numeroDoCartao){
  setUser(user);
  setSenha(senha);
  setLogin(login);
  setNumeroDoCartao(numeroDoCartao);
  setSaldo(saldo);
}


void ContaCorrente::setTaxaDeManutençao (const int & taxaDeManutençao)
{
    this-> taxaDeManutençao = taxaDeManutençao;
}


void ContaCorrente::taxaDeManutençao(float taxaDeManutençao)
{
    taxaDeManutençao=15;
    /* Como o programa irá funcionar em um tempo menor do que um mês, foi determinado uma única cobrança para
    a taxa de manutenção visto que o programa só irá ficar aberto poucos minutos, e por mais que tivessemos 
    criado um relógio, ele seria reiniciado toda vez que abrisse o programa, por tanto não faz sentido cria-lo*/
	saldo = saldo -taxaDeManutençao;
    
}
/*
bool ContaCorrente::salvarDados()
{
	
}
bool ContaCorrente::cadastroUsuario()
{
	
}*/

