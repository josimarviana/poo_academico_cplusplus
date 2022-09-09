#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ficharioaluno.h"
#include "aluno.h"

FicharioAluno::FicharioAluno(Aluno * _alunos){
        alunos = _alunos;
}

void FicharioAluno::cadastrar(){
        string nome, telefone, matricula, cpf, email;

        int contador = 0;

        Aluno *aaluno;

        while ((aaluno = &alunos[contador])==nullptr){
            contador++;
        }

        if(contador < 40){
                cout << " === Cadastrar ALUNO ==== " << endl;
                cout << "Matrícula: ";
                cin >> matricula;
                cout << "CPF: ";
                cin >> cpf;
                cout << "Nome: ";
                cin >> nome;
                cout << "Telefone: ";
                cin >> telefone;
                cout << "Email: ";
                cin >> email;

                Aluno aluno(nome, telefone, matricula, cpf, email);
                alunos[contador] = aluno;
        } else {
                cout << "Cadastros esgotados!";
        }

};
void FicharioAluno::alterar(){

};
void FicharioAluno::excluir(){

};
void FicharioAluno::consultar(){

};
void FicharioAluno::relatorio(){

};

