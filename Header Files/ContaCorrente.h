#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

class ContaCorrente:public Conta{
    ContaCorrente(const string & = "0",const long long & = 0,const int & = 0,const float & = 0,const Endereco & =  {"0","0","0","0"});
    void Taxa_de_manuntencao(); //desconto para a manutenção da conta corrente (geralmente 15 reais por mes)


};

#endif