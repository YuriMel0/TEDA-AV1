#ifndef DADO_H
#define DADO_H
#include <iostream>
#include <Aluno.h>

using namespace std;

class Dado
{
    public:
        Dado(Aluno p_A){a = p_A;};
        virtual ~Dado();
        void Put(Aluno d_A){a = d_A;};
        Aluno Get(){ return a;}
        void Print(){
            //cout << a << endl;
        }

    protected:

    private:
        Aluno a;
};

#endif // DADO_H
