#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ficharioaluno.h"
#include "aluno.h"

FicharioAluno::FicharioAluno(Aluno  *alunos, int tamanhoFicharioAlunos){
        this->alunos = alunos;
        this->tamanhoFicharioAlunos = tamanhoFicharioAlunos;
        this->qtdeAlunosFichario = 0;
}

void FicharioAluno::cadastrar(){
        string nome, telefone, matricula, cpf, email;

        if(qtdeAlunosFichario < tamanhoFicharioAlunos){
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
                alunos[qtdeAlunosFichario] = aluno;

                qtdeAlunosFichario++;

        } else {
                cout << "Cadastros esgotados!";
        }

}
void FicharioAluno::alterar(){

}
void FicharioAluno::excluir(){
        int pos, res;

        cout << " === Excluir ALUNO ==== " << endl;
        cout<<"Qual posicao deseja excluir? ";
        cin>>pos;

        
        if(pos >= 0 || pos < qtdeAlunosFichario){
            alunos[pos].getNome();
            cout <<  "Aluno: " << alunos[pos].getNome() << " será excluído";
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)" << endl;
            cin >> res;
            if( res == 1){
                alunos[pos].setMatricula("Apagado");
            } else{
                cout<<"Exlusão não efetuada"<<endl;
            }

        }else{
            cout<<"Posição inválida"<<endl;
        }
}
void FicharioAluno::consultar(){

}
void FicharioAluno::relatorio(){
        cout << "[Relatório de ALUNOS]" << endl;
        for (int i = 0; i < qtdeAlunosFichario; i++) {
            if (alunos[i].getMatricula()!= "Apagado") {
                cout << "Matrícula: " << alunos[i].getMatricula() << " - Nome: " << alunos[i].getNome() << endl;
                
            }

        }
        cout << "---------------------" << endl;
}

