#include "t_Pilha.h"

template <typename T>
t_Pilha<T>::t_Pilha()
{
    t_Lista<T> pilha;//ctor
}

template <typename T>
t_Pilha<T>::~t_Pilha()
{
    //dtor
}
template <typename T>
void t_Pilha<T>::LerTopo()
{
    pilha.LerTopo();
}

template <typename T>
void t_Pilha<T>::Print()
{
    pilha.Print();
}
template <typename T>
void t_Pilha<T>::Put(T dado)
{
    pilha.Put(dado);
}


template <typename T>
T t_Pilha<T>::RemoveTopo()
{
    return pilha.RemoveTopo();
}

template class t_Pilha<int>;
template class t_Pilha<string>;
