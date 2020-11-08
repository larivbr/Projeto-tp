#ifndef USUARIO_H
#define USUARIO_H
struct Endereco{
    string rua;
    string CEP;
    string cidade;
    string estado;
};

class Usuario{
private:
    long int Numero_Do_Cartao;
    long int CPF;
    long int login // login apenas compostos por numeros
    int senha; //senha feita apenas de numeros
    Endereco enderecoDoUsuario; // tu implementa essa aqui no construtor, valymr.
    //Eu não sei como tu fez para implementar no teu codigo
    //precisamos intanciar o objeto tbm, lembrando que o mesmo usuario pode ter uma conta corrente e uma poupança
public:
    Usuario(long int=0, long int=0, long int=0,int=0);
    void setNumero_Do_Cartao(long int);
    long int getNumero_Do_Cartao();
    void setCPF(long int);
    long int getCPF();
    void setLogin(long int);
    long int getLogin();
    void setSenha(int);
    int getSenha();

};

#endif