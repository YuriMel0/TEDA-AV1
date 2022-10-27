#include <iostream>
#include "listaClientes.h"

using namespace std;

ListaCliente::ListaCliente()
{
    NoInicio->proximo = nullptr;
}

ListaCliente::~ListaCliente()
{

}

bool ListaCliente::listaVazia()
{
    if (NoInicio->proximo == nullptr)
    {
        return true;
    } else {
        return false;
    }
    
}

bool ListaCliente::listaCheia()
{
    No* NoNovo;
    try
    {
        NoNovo = new No;
        delete NoNovo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}

void ListaCliente::inserir(cliente nome)
{
    if (listaCheia())
    {
        cout << "Lista Cheia" << endl;
        cout << "Impossivel inserir novo cliente" << endl;
    } else {
        No* NoNovo = new No;
        NoNovo->nome = nome;
        NoInicio->proximo = NoNovo;
        NoNovo->proximo = nullptr;
    }
    
}

cliente ListaCliente::remover(cliente nome)
{
    if (listaVazia)
    {
        cout << "Lista vazia" << endl;
        cout << "Impossivel remover cliente" << endl;
    } else {
        
    }
}

void ListaCliente::imprimeClientes()
{

}

void ListaCliente::consultaCliente()
{

}