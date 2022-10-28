#ifndef T_NO_H
#define T_NO_H

#include <t_Dado.h>

template<class T>
class t_Lista;
template <class T>
class t_No
{
    public:
        t_No(t_Dado<T>);
        t_No(){
            prox = nullptr;
        }
        void Put(t_Dado<T> data){dado = data;}
        t_Dado<T> Get(){
            return dado;
        }
        virtual ~t_No(){delete prox;};

    protected:

    private:
        t_No<T> *prox;
        t_Dado<T> dado;
    friend class t_Lista<T>;
};

#endif // T_NO_H
