#ifndef ESCOLA_H
#define ESCOLA_H

typedef unsigned long long int CNPJ;

class Escola
{
    public:
        Escola();
        virtual ~Escola();
        void printDadosEscola(CNPJ);

    protected:
        CNPJ cnpj;
        ListaAlunos<Aluno>;

    private:
};

#endif // ESCOLA_H
