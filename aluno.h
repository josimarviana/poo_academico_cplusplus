#ifndef ALUNO_H
#define ALUNO_H
#include <string>
#include <chrono>
using std::string;
#include "pessoa.h"
using namespace std::chrono;
class Aluno: public Pessoa{
    private:
        short int matricula;  
        time_point<system_clock> dataNascimento;  
    public:
        static int indice;
         bool operator==(const Aluno& o) const;
        Aluno();
        Aluno(string, string, string, string, time_point<system_clock>);
        void setMatricula(short int);
        short int getMatricula();
        void setNome(string);
        string getNome();
        void setDataNascimento(const time_point<system_clock>);
        time_point<system_clock> getDataNascimento() const;
        string getDataNascimentoString() const;
        friend bool operator==(Aluno&, Aluno&);
};

#endif