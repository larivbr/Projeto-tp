#include "..\Header Files\Usuario.h"
Usuario::Usuario(const string & nomeDoUsuario,const int & idade,const long int & CPF,/*Recurso c++ 11 permite iniciar structs/classes dessa forma*/const Endereco & enderecoDoUsuario){
	this->nomeDoUsuario = nomeDoUsuario;
	this->idade = idade;
	this->CPF =CPF;
	this->enderecoDoUsuario;
}


      