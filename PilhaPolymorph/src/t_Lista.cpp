#include "t_Lista.h"
#include <iostream>

using namespace std;

template <typename T>
t_Lista<T>::t_Lista()
{
    topo = nullptr;
    length = 0;//ctor
}

template <typename T>
t_Lista<T>::~t_Lista()
{
    //dtor
}

template <typename T>
void t_Lista<T>::Put(t_No<T> *ptr_novo){
    if(topo == nullptr){
        topo = ptr_novo;
    }
    else
        ptr_novo->prox = topo;
    topo = ptr_novo;

}

template <typename T>
void t_Lista<T>::Put(t_Dado<T> data){
    t_No<T> *ptr_novo = new t_No<T>(data);
    Put(ptr_novo);
}

template <typename T>
void t_Lista<T>::Print(){
    t_No<T> *aux;

    aux = topo;

    while (aux){
        cout << (aux->Get()).Get() << endl;
        aux = aux->prox;
    }
}

template <typename T>
void t_Lista<T>::LerTopo()
{
    cout << (topo->Get()).Get() << endl;
}

template <typename T>
T t_Lista<T>::RemoveTopo()
{
    T d_topo = (topo->Get()).Get();
    topo = topo->prox;
    return d_topo;



}
template class t_Lista<int>;
template class t_Lista<string>;
