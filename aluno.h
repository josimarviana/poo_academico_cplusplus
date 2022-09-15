#ifndef ALUNO_H
#define ALUNO_H
#include <string>
using std::string;
#include "pessoa.h"

class Aluno: public Pessoa{
    private:
        short int matricula;
        string cpf, nome, telefone, email;      
    public:
        static int indice;
        Aluno();
        Aluno(string, string, string, string);
        void setMatricula(short int);
        short int getMatricula();
        void setNome(string);
        string getNome();
        friend bool operator==(Aluno&, Aluno&);
};

#endif