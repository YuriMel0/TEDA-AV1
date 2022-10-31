#include "ListaAlunos.h"
#include "Aluno.h"
#include <string>


template <typename T>
ListaAlunos<T>::ListaAlunos()
{
    inicio = nullptr;
}

template <typename T>
ListaAlunos<T>::~ListaAlunos()
{
}

template <typename T>
T ListaAlunos<T>::cadastraAluno(Aluno)
{
    No<T>* novoAluno;
    novoAluno->dadoAluno = Aluno;
    novoAluno->proximo = nullptr;
}

template <typename T>
void ListaAlunos<T>::excluirAluno(T Aluno)
{

}

template <typename T>
void ListaAlunos<T>::printAluno(Aluno)
{
    No<T>* aux = inicio;
    while (aux != nullptr) {
        cout "-----------------------------------" << endl;
        cout << Aluno.nome << endl;
        cout << Aluno.cpf << endl;
        cout << Aluno.num_matricula << endl;
        cout "-----------------------------------" << endl;

        aux = aux->proximo;
    }
}

template <typename T>
void ListaAlunos<T>::printAlunos()
{
}

template <typename T>
void ListaAlunos<T>::atualizaDados(Aluno)
{
}
