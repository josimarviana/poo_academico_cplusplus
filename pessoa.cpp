#include <iostream>
using namespace std;
#include "pessoa.h"

Pessoa::Pessoa(){
    
}

Pessoa::Pessoa(string nome){
    setNome(nome);
}

void Pessoa::setNome(string _nome){
    nome = _nome;
}
string Pessoa::getNome() const{
    return nome;
}
void Pessoa::setCpf(string _cpf){
    cpf = _cpf;
}
string Pessoa::getCpf() const{
        return cpf;
}
void Pessoa::setTelefone(string _telefone){
    telefone = _telefone;
}
string Pessoa::getTelefone() const{
    return telefone;
}
void Pessoa::setEmail(string _email){
    email = _email;
};
string Pessoa::getEmail() const{
    return email;
}
void Pessoa::setDataNascimento(const time_point<system_clock> dataNascimento){

}

time_point<system_clock> Pessoa::getDataNascimento() const{
    return dataNascimento;
};


