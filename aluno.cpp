#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <chrono>
using namespace std::chrono;
#include "aluno.h"

Aluno::Aluno(){

}

Aluno::Aluno(string cpf, string nome, string telefone, string email, time_point<system_clock> dataNascimento){
    ++indice;
    this->matricula = indice;
    this->cpf = cpf;
    this->nome = nome;
    this->telefone = telefone;
    this->email = email; 
    this->dataNascimento = dataNascimento;
    this->situacaoAluno = SituacaoAluno::NAOMATRICULADO;

}

void Aluno::setDataNascimento(const time_point<system_clock> dataNascimento){

}

time_point<system_clock> Aluno::getDataNascimento() const{
    return dataNascimento;
}

string Aluno::getDataNascimentoString() const{
    std::time_t ttp = std::chrono::system_clock::to_time_t(Aluno::getDataNascimento());
    return std::ctime(&ttp);
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

bool Aluno::operator==(const Aluno& o) const {
    return cpf == o.cpf;
}