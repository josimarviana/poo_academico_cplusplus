#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "aluno.h"
#include "ficharioaluno.h"

int main(){
    Aluno alunos[100]; 
    FicharioAluno ficharioAluno(alunos);
    return 0; // indica terminação bem-sucedida
}