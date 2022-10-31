#include "Escola.h"
#include <iostream>
#include <string>


Escola::Escola()
{
}

Escola::~Escola()
{
}

void Escola::printDadosEscola(CNPJ cnpj)
{
    cout << "------------------------------------";
    cout << "         NOME DA ESCOLA             ";
    cout << "  " << endl;
    cout << "         CNPJ DA ESCOLA             ";
    cout << "  " << cnpj << endl;
    cout << "------------------------------------";
}
