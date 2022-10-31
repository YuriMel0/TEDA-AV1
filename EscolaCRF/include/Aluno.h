#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"

typedef unsigned long long int MATRICULA;

class Aluno
{
    public:
        Aluno();
        virtual ~Aluno();
        void cadastra(int idade, CPF cpf, char sexo, MATRICULA num_matricula);
        int idade;
        CPF cpf;
        char sexo;
        MATRICULA num_matricula;

    protected:

    private:
};

#endif // ALUNO_H
