#include "..\Header Files\Usuario.h"
Usuario::Usuario(const string & nomeDoUsuario,const int & idade,const long int & CPF,/*Recurso c++ 11 permite iniciar structs/classes dessa forma*/const Endereco & enderecoDoUsuario){
	this->nomeDoUsuario=nomeDoUsuario;
	this->idade=idade;
	this->CPF=CPF;
	this->enderecoDoUsuario=enderecoDoUsuario;
}

void Usuario::setIdade(const int & idade){
	this->idade=idade;
}

int Usuario::getIdade() const{
	return idade;
}

void Usuario::setCPF(const long int & CPF){
	this->CPF=CPF;
}

long int Usuario::getCPF() const{
	return CPF;
}

void Usuario::setEnderecoDoUsuario(const Endereco & enderecoDoUsuario){
	this->enderecoDoUsuario=enderecoDoUsuario;
}

Endereco Usuario::getEnderecoDoUsuario() const{
	return enderecoDoUsuario;
}

void Usuario::setNomeDoUsuario(const string & nomeDoUsuario){
	this->nomeDoUsuario=nomeDoUsuario;
}

string Usuario::getNomeDoUsuario() const{
	return nomeDoUsuario;
}


