#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "aluno.h"

class FicharioAluno{
    private:
        Aluno * alunos; 
    public:
        FicharioAluno(Aluno []); // ou FicharioAluno(Aluno *)

};
#endif