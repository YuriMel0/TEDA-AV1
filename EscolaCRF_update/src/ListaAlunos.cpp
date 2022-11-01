#include "ListaAlunos.h"
#include "Aluno.h"
#include <string>
#include <iostream>

using namespace std;
ListaAlunos::ListaAlunos()
{
    inicio = nullptr;
}

ListaAlunos::~ListaAlunos()
{
}

void ListaAlunos::InsereAluno(No *ptr_novo){
    if(inicio == nullptr){
        inicio = ptr_novo;
    }
    else
        ptr_novo->prox = inicio;
    inicio = ptr_novo;
}

void ListaAlunos::InsereAluno(Aluno a){
    No *ptr_novo = new No(a);
    InsereAluno(ptr_novo);
}

void ListaAlunos::printAluno(Aluno a)
{
    No* aux = inicio;
    while (aux != nullptr) {
        cout << "-----------------------------------" << endl;
        //cout << a.nome << endl;
        cout << a.get_CPF() << endl;
        cout << a.get_Matricula() << endl;
        cout << "-----------------------------------" << endl;

        aux = aux->prox;
    }
}

void ListaAlunos::printAlunos()
{
    No *aux;

    aux = inicio;

    while (aux){
        cout << (aux->get()).get_Nome() << "|" << (aux->get()).get_Idade() << "|" << (aux->get()).get_Matricula() << endl;
        aux = aux->prox;
    }
}

void ListaAlunos::RemoveAluno(Aluno a)
{
    No* temp = inicio;
    No* prev = nullptr;

    if (temp != nullptr && (temp->dadoAluno).get_Matricula() == a.get_Matricula())
    {
        inicio = temp->prox; // Changed head
        delete temp;            // free old head
    }

    else
    {
        while (temp != nullptr && (temp->dadoAluno).get_Matricula() != a.get_Matricula())
    {
        prev = temp;
        temp = temp->prox;
    }
    }

    if (temp == nullptr)
        return;

    prev->prox = temp->prox;

    delete temp;
}

void ListaAlunos::atualiza_matricula(Aluno a, MATRICULA matr)
{
}

void ListaAlunos::atualiza_idade(Aluno a, int nIdade)
{
}
