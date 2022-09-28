#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <chrono>
#include <unistd.h>
using std::string;
using namespace std::chrono;
class Pessoa{
    protected:
        string cpf, nome, telefone, email;
        time_point<system_clock> dataNascimento;
    public:
        Pessoa();
        Pessoa(string);
        void setDataNascimento(const time_point<system_clock>);
        time_point<system_clock> getDataNascimento() const;
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