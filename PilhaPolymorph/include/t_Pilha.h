#ifndef T_PILHA_H
#define T_PILHA_H

#include <t_Lista.h>

template <class T> class t_Pilha
{
    public:
        t_Pilha();
        void Put(T dado);
        void LerTopo();
        T RemoveTopo();
        void Print();
        virtual ~t_Pilha();

    protected:

    private:
        unsigned int length;
        t_Lista<T> pilha;

};

#endif // T_PILHA_H
