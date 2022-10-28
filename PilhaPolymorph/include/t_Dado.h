#ifndef T_DADO_H
#define T_DADO_H
#include <iostream>

using namespace std;

template <class T>
class t_Dado
{
    public:
        t_Dado();
        t_Dado(T ip){
            i = ip;
        };
        virtual ~t_Dado();
        T Get(){
            return i;
        }
        void Put(T d_i){
            i = d_i;
        }
        void Print(){
            cout << i << endl;
        }

    protected:

    private:
        T i; // Chave primária (dado inteiro)
};

#endif // T_DADO_H
