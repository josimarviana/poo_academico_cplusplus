#ifndef FICHARIO_H
#define FICHARIO_H
#include <string>
using std::string;

class Fichario{
    public:
        virtual void cadastrar() = 0;
        virtual void alterar() = 0;
        virtual void excluir() = 0;
        virtual void consultar() = 0;
        virtual void relatorio() = 0;
};
#endif