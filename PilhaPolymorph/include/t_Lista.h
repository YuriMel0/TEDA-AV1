#ifndef T_LISTA_H
#define T_LISTA_H

#include <t_No.h>

using namespace std;

template <typename T>
class t_Lista
{
    public:
        t_Lista();
        void Put(t_Dado<T> d);
        void Put(t_No<T> *ptr_novo);
        void Print();
        virtual ~t_Lista();
        void LerTopo();
        T RemoveTopo();

    protected:

    private:
        unsigned int length;
        t_No<T> *topo;

};

#endif // T_LISTA_H
