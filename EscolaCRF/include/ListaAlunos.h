#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H
#include "No.h"
#include <string>

template <typename T>
class ListaAlunos
{
    public:
        ListaAlunos();
        virtual ~ListaAlunos();
        T cadastraAluno(T Aluno);
        void excluirAluno(T Aluno);
        void printAluno(T Aluno);
        void printAlunos();
        void atualizaDados(T Aluno);

    protected:
        No<T>* inicio;

    private:
};

#endif // LISTAALUNOS_H
