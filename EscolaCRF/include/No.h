#ifndef NO_H
#define NO_H
#include "Aluno.h"

template <typename T>
class No
{
    public:
        No();
        virtual ~No();
        T dadoAluno;
        No<T>* proximo;

    protected:

    private:
};

#endif // NO_H
