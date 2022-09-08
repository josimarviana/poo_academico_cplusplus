#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;

class Pessoa{
    private:
        string nome, cpf, telefone, email;
    public:
        Pessoa();
        Pessoa(string);
        void setNome(const string);
        string getNome() const;
        void setCpf(const string);
        string getCpf() const;
        void setTelefone(const string);
        string getTelefone() const;
        void setEmail(const string);
        string getEmail() const;
};
#endif