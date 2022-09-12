#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "aluno.h"
Aluno::Aluno(){

}

Aluno::Aluno(string matricula, string cpf, string nome, string telefone, string email){
    this->matricula = matricula;
    this->cpf = cpf;
    this->nome = nome;
    this->telefone = telefone;
    this->email = email; 
}

void Aluno::setMatricula(string matricula){
    this->matricula = matricula;
}
string Aluno::getMatricula(){
    return matricula;
}
void Aluno::setNome(string matricula){
    matricula = matricula;
}
string Aluno::getNome() {
    return nome;
}