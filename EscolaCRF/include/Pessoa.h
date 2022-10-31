#ifndef PESSOA_H
#define PESSOA_H

typedef unsigned long long int CPF;

class Pessoa
{
    public:
        Pessoa();
        virtual ~Pessoa();
        void cadastra(int idade, CPF cpf, char sexo);
        int idade;
        CPF cpf;
        char sexo;
    protected:

    private:
};

#endif // PESSOA_H
