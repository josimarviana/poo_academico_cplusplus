#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "ficharioaluno.h"
#include "aluno.h"
#include <string>
#include <chrono>
#include <string>
#include <sstream>
#include <iostream>
#include <sstream>

FicharioAluno::FicharioAluno(vector <Aluno> alunos){
        this->alunos = alunos;
        
}

void FicharioAluno::cadastrar(){
        string nome, telefone, matricula, cpf, email, dataNascimentoString;
        
        cout << " === Cadastrar ALUNO ==== " << endl;
        cout << "CPF: ";
        cin >> cpf;
        cout << "Nome: ";
        cin >> nome;
        cout << "Telefone: ";
        cin >> telefone;
        cout << "Email: ";
        cin >> email;
        cout << "Data de nascimento (dd/mm/yyyy): ";
        cin >> dataNascimentoString;

      //  std::chrono::system_clock::time_point dataNascimento;

        std::tm tm = {};
        std::stringstream dataNascimentoStringStream(dataNascimentoString);

        dataNascimentoStringStream >> std::get_time(&tm, "%d/%m/%Y");
        auto dataNascimento = std::chrono::system_clock::from_time_t(std::mktime(&tm));

        Aluno aluno(cpf, nome, telefone, email, dataNascimento);

        // std::vector<Aluno>::iterator it;
        auto it = find(alunos.begin(), alunos.end(), aluno);
        if(it != alunos.end()){
            cout << "Aluno já cadastrado!"<< endl;
        }else{
            alunos.push_back(aluno);
        }

}
void FicharioAluno::alterar(){
        string cpf, nome, telefone, email;
        int pos;

        cout << " ==== Alterar ALUNO ==== "<< endl;
        cout << "Qual a posição do vetor deseja alterar? ";
        cin >> pos;

        if (alunos[pos].getMatricula() != 0) {

            cout << "CPF atual: " << alunos[pos].getCpf()<< endl; //get_ pega valor do objeto
            cout << "Digite o novo CPF: ";
            cin >> cpf;
            alunos[pos].setCpf(cpf); // set_ coloca o valor no objeto

            cout << "Nome atual: " << alunos[pos].getNome()<< endl; //get_ pega valor do objeto
            cout << "Digite o novo Nome: ";
            cin >> nome;
            alunos[pos].setNome(nome); // set_ coloca o valor no objeto

            cout << "Tefone atual: " << alunos[pos].getTelefone()<< endl; //get_ pega valor do objeto
            cout << "Digite o novo Telefone: ";
            cin >> telefone;
            alunos[pos].setTelefone(telefone); // set_ coloca o valor no objeto

            cout << "Endereco email atual: " << alunos[pos].getEmail() << endl; //get_ pega valor do objeto
            cout << "Digite o novo Endereço email: ";
            cin >> email;
            alunos[pos].setEmail(email); // set_ coloca o valor no objeto

        } else {
            cout << " Posicao inválida. ";
        }
}
void FicharioAluno::excluir(){
        int pos, res;

        cout << " === Excluir ALUNO ==== " << endl;
        cout<<"Qual posicao deseja excluir? ";
        cin>>pos;

        
        if(pos < alunos.size()){
            cout <<  "Aluno: " << alunos[pos].getNome() << " será excluído";
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)" << endl;
            cin >> res;
            if( res == 1){
                alunos.erase(alunos.begin()+pos);
            } else{
                cout<<"Exlusão não efetuada"<<endl;
            }

        }else{
            cout<< "Posição inválida"<<endl;
        }
}
void FicharioAluno::consultar(){
        int pos;

        cout<< " === Consultar ALUNO === "<<endl;
        cout<< "Qual a posição do vetor deseja consultar? ";
        cin >> pos;

        if (pos < alunos.size()) {
             cout << "Matrícula: " << alunos[pos].getMatricula() << " - Nome: " << alunos[pos].getNome() << " - Cpf: " << alunos[pos].getCpf() << " - Telefone: " << alunos[pos].getTelefone() << " - Email: " << alunos[pos].getEmail() << " - Data Nascimento: " <<  alunos[pos].getDataNascimentoString() << endl;
        } else {
            cout<< " Posicao inválida. ";
        }
}
void FicharioAluno::relatorio(){
        cout << "[Relatório de ALUNOS]" << endl;
        for (Aluno aluno: alunos) {
                cout << "Matrícula: " << aluno.getMatricula() << " - Nome: " << aluno.getNome() << " - Cpf: " << aluno.getCpf() << " - Telefone: " << aluno.getTelefone() << " - Email: " << aluno.getEmail() << " - Data Nascimento: " <<  aluno.getDataNascimentoString()  << endl;
        }
        cout << "---------------------" << endl;
}

