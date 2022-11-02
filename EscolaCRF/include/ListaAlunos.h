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
        void atualiza_categoria(Aluno);
        void atualiza_idade(Aluno, int);
        void RemoveAluno(Aluno);
        int get_tam(){return tam;};
        Aluno get_Aluno(MATRICULA);

    protected:
        No* inicio;

    private:
        friend class Aluno;
        int tam;
};

#endif // LISTAALUNOS_H
