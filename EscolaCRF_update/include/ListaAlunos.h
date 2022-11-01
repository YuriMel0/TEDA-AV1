#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H
#include "No.h"
#include <string>


class Aluno;

class ListaAlunos
{
    public:
        ListaAlunos();
        virtual ~ListaAlunos();
        void InsereAluno(Aluno);
        void InsereAluno(No*);
        void printAluno(Aluno);
        void printAlunos();
        void atualiza_matricula(Aluno, MATRICULA);
        void atualiza_idade(Aluno, int);
        void RemoveAluno(Aluno);

    protected:
        No* inicio;

    private:
        friend class Aluno;
};

#endif // LISTAALUNOS_H
