#ifndef NO_H
#define NO_H
#include "Aluno.h"

class ListaAlunos;

class No
{
    public:
        No(Aluno);
        virtual ~No(){delete prox;};
        Aluno get() {return dadoAluno;};
        void Put(Aluno a) {dadoAluno = a;};
    protected:

    private:
        Aluno dadoAluno;
        No* prox;
        friend class ListaAlunos;
};

#endif // NO_H
