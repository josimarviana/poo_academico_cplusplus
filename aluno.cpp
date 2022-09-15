#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "aluno.h"

Aluno::Aluno(){

}

Aluno::Aluno(string cpf, string nome, string telefone, string email){
    ++indice;
    this->matricula = indice;
    this->cpf = cpf;
    this->nome = nome;
    this->telefone = telefone;
    this->email = email; 
}

void Aluno::setMatricula(short int matricula){
    this->matricula = matricula;
}
short int Aluno::getMatricula(){
    return matricula;
}
void Aluno::setNome(string nome){
    matricula = matricula;
}
string Aluno::getNome() {
    return nome;
}
