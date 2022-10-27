#include <string.h>

typedef _STRING_H cliente;

struct No
{
    cliente nome;
    No* proximo;
};

class ListaCliente
{
    private:
        No* NoInicio;
    public:
        ListaCliente();
        ~ListaCliente();
        bool listaVazia();
        bool listaCheia();
        void inserir(cliente nome);
        cliente remover(cliente nome);
        void imprimeClientes();
        void consultaCliente();
};
