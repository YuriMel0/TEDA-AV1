#include <iostream>
#include <string>
#include <Aluno.h>
#include <No.h>
#include <Escola.h>
#include <Pessoa.h>
#include <ListaAlunos.h>
#include <string>
#include <locale.h>
#include <Menu.h>

using namespace std;

int main()
{

    setlocale(LC_ALL,"");

    ListaAlunos l1;
    Escola e1;
    e1.cadastra(89351784959, l1, "pH");

    Menu m(l1,e1);

    m.Print();

    return 0;
}
