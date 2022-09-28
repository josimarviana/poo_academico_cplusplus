#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include "aluno.h"
#include "fichario.h"
class FicharioAluno: public Fichario{
    private:
        vector <Aluno> alunos;
    public:
        FicharioAluno(vector <Aluno>);
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif