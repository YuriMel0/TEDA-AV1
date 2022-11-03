#ifndef ESCOLA_H
#define ESCOLA_H
#include <ListaAlunos.h>

typedef unsigned long long int CNPJ;

class Escola
{
    public:
        void printDadosEscola();
        void cadastra(CNPJ, ListaAlunos, string);
    protected:

    private:
        string nome;
        CNPJ cnpj;
        ListaAlunos lista;
};

#endif // ESCOLA_H
