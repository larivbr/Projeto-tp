/*NADHIA RODRIGUES DA SILVA    MATRICULA:119210923
LABORATORIO 14 ****** EMPRESA ******   */

#include<iostream>
#include<string>
using namespace std;
#include "Empresa.h"
int Empresa::deltaNomes = 0;

Empresa::Empresa(){
	nome = cnpj = " ";
}
Empresa::Empresa(int numFun){
	funcionarios = new Funcionario[numFun];
}

void Empresa::setIniciar(string fnome, string tcnpj, int sz)
{
    this->nome = fnome;
    this->cnpj = tcnpj;
    this->numFun = sz;
}

void Empresa::szAloca(int numFun){
	funcionarios = (Funcionario *)new Funcionario[numFun];
	this->numFun = numFun;
}

bool Empresa::addFun(Funcionario fx){
	    if(numFun == deltaNomes){
        return false;
    }
    else
    {
        funcionarios[deltaNomes++] = fx;
        return true;
    }
	
}

string Empresa::getNomeEmpresa() const{
	return nome;
}

string Empresa::getCnpj() const{
	return cnpj;
}

void Empresa::aumentarSalarioPoDepartamento(string departamento, float porcentagem){
	for(int i=0; i<deltaNomes; i++){  
		if(departamento == funcionarios[i].getDepartamento()){
			float auxSalario = funcionarios[i].getSalario();
			auxSalario += funcionarios[i].getSalario() * (porcentagem/100);
			funcionarios[i].setSalario(auxSalario);
		}
	}
}
void Empresa::imprimeFuncionarios() const{
	for(int i=0; i<deltaNomes; i++){  
		cout << "Nome do funcioário: " << funcionarios[i].getNome() << endl;
		cout << "Salário: " << funcionarios[i].getSalario() << endl;
		cout << "Data de admissão: " << funcionarios[i].getDataDeAdmissao() << endl;
		cout << "Departamento: " << funcionarios[i].getDepartamento() << endl;
	} 
}

Empresa::~Empresa(){
	delete []funcionarios;
}