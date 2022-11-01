#include "Escola.h"
#include <iostream>
#include <string>
#include <ListaAlunos.h>

using namespace std;

void Escola::cadastra(CNPJ pCNPJ, ListaAlunos l, string pNome)
{
    cnpj = pCNPJ;
    lista = l;
    nome = pNome;
}

Escola::~Escola()
{
}

void Escola::printDadosEscola()
{
    cout << "------------------------------------" << endl;
    cout << "         NOME DA ESCOLA             " << endl;
    cout << nome << endl;
    cout << "------------------------------------" << endl;
    cout << "         CNPJ DA ESCOLA             " << endl;
    cout << cnpj << endl;
    cout << "------------------------------------" << endl;
    cout << "         LISTA DE ALUNOS             " << endl;
    lista.printAlunos();
}
