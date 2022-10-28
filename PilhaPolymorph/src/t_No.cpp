#include "t_No.h"

template <typename T>
t_No<T>::t_No(t_Dado<T> data)
{
    prox = nullptr;
    dado = data; //ctor
}

template class t_No<int>;
template class t_No<string>;
