#include "ListaAlunos.h"
#include "Aluno.h"
#include <string>
#include <iostream>

using namespace std;
ListaAlunos::ListaAlunos()
{
    inicio = nullptr;
    tam = 0;
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
    tam++;
    InsereAluno(ptr_novo);
}

Aluno ListaAlunos::get_Aluno(MATRICULA matr)
{
    No* aux = inicio;
    Aluno a;
    while (aux != nullptr)
    {
        if ((aux->dadoAluno).get_Matricula() == matr)
        {
            a = aux->get();
            return a;
        }
        aux = aux->prox;
    }

    delete aux;
}

void ListaAlunos::printAluno(Aluno a)
{
    No* aux = inicio;
    while (aux != nullptr)
    {
        if ((aux->dadoAluno).get_Matricula() == a.get_Matricula())
        {
            a.Print();
        }
        aux = aux->prox;
    }

    delete aux;
}

void ListaAlunos::printAlunos()
{
    No *aux;

    aux = inicio;

    if (tam == 0)
    {
        cout << "Lista vazia" << endl;
    }
    else{
    while (aux){
        cout << (aux->get()).get_Nome() << "|" << (aux->get()).get_Idade() << "|" << (aux->get()).get_Matricula() << "|" << (aux->get()).get_categoria() << endl;
        aux = aux->prox;
    }
    }

    delete aux;
}

void ListaAlunos::RemoveAluno(Aluno a)
{
    if (tam == 0)
    {
        cout << "A lista de alunos está vazia!" << endl;
    }
    else if ((inicio->get()).get_Matricula() == a.get_Matricula())
    {
        inicio = inicio->prox;
        tam--;
    }
    else
    {
        No* prev;
        No* curr = inicio;
        while(curr)
        {
            if ((curr->get()).get_Matricula() == a.get_Matricula())
            {
                break;
            }
            else
            {
                prev = curr;
                curr = curr->prox;
            }
        }
        if (curr == nullptr)
        {
            cout << "Can't remove value: no match found" << endl;
        }
        else
        {
            prev->prox = curr->prox;
            tam--;
        }
    }

}


void ListaAlunos::atualiza_idade(Aluno a, int nIdade)
{
    No* temp = inicio;

    while (temp)
    {
        if ((temp->dadoAluno).get_Matricula() == a.get_Matricula())
        {
            (temp->dadoAluno).set_idade(nIdade);
        }
        temp = temp->prox;
    }
    delete temp;

}

void ListaAlunos::atualiza_categoria(Aluno a)
{
    No* temp = inicio;

    while (temp)
    {
        if ((temp->dadoAluno).get_Matricula() == a.get_Matricula())
        {
            (temp->dadoAluno).set_categoria();
        }
        temp = temp->prox;
    }
    delete temp;

}
