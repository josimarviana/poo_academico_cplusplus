#ifndef ALUNO_H
#define ALUNO_H
#include <string>
using std::string;
#include "pessoa.h"

class Aluno: public Pessoa{
    private:
        string matricula, cpf, nome, telefone, email;
    public:
        Aluno();
        Aluno(string, string, string, string, string);
        void setMatricula(string);
        string getMatricula();
        void setNome(string);
        string getNome();

};
#endif