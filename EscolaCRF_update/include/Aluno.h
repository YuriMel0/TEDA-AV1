#ifndef ALUNO_H
#define ALUNO_H
#include <Pessoa.h>

using namespace std;

typedef unsigned long long int MATRICULA;

class Aluno : public Pessoa
{
    public:
        void cadastra(int, CPF, char, MATRICULA, string);
        MATRICULA get_Matricula(){return num_matricula;};
        int get_Idade() {return idade;};
        CPF get_CPF() {return cpf;};
        char get_Sexo() {return sexo;};
        string get_Nome() {return nome;};
        void Print();
    protected:

    private:
        MATRICULA num_matricula;
        string nome;
        int idade;
        CPF cpf;
        char sexo;
};

#endif // ALUNO_H
