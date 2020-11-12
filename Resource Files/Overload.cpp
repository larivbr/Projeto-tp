#include "..\Header Files\Usuario.h"
#include "..\Header Files\Conta.h"
ostream & operator<<(ostream & os,Usuario & auxUsuario){
	cout<<"Nome: "<<auxUsuario.getNomeDoUsuario();
	cout<<"Idade: "<<auxUsuario.getIdade();
	cout<<"CPF: "<<auxUsuario.getCPF();
	cout<<"Rua: "<<auxUsuario.getEnderecoDoUsuario().rua;
	cout<<"Cep: "<<auxUsuario.getEnderecoDoUsuario().CEP;
	cout<<"Cidade: "<<auxUsuario.getEnderecoDoUsuario().cidade;
	cout<<"Estado: "<<auxUsuario.getEnderecoDoUsuario().estado;
	return os;
}
istream & operator>>(istream & is,Usuario & auxUsuario){
	string nome;
	int idade;
	long int CPF;
	Endereco endereco;
	cout<<"Nome: ";cin>>nome;
	cout<<"Idade: ";cin>>idade;
	cout<<"CPF: ";cin>>CPF;
	cout<<"Pressione Enter"<<endl;
	cout<<"Rua: ";cin>>endereco.rua;
	cout<<"Cep: ";cin>>endereco.CEP;
	cout<<"Cidade: ";cin>>endereco.cidade;
	cout<<"Estado: ";cin>>endereco.estado;
	auxUsuario.setNomeDoUsuario(nome);
	auxUsuario.setIdade(idade);
	auxUsuario.setCPF(CPF);
	auxUsuario.setEnderecoDoUsuario(endereco);
	return is;
}

istream & operator>>(istream & in, Conta & contaAux){
    int senha;
    cout<<"senha: ";cin>>senha;
    contaAux.setSenha(senha);
		//Ao criar a conta o usuarios iniciar o saldo sem dinheiro
    contaAux.setSaldo(0);
    return in;
}
