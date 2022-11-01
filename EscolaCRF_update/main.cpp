#include <iostream>
#include <string>
#include <Aluno.h>
#include <No.h>
#include <Escola.h>
#include <Pessoa.h>
#include <ListaAlunos.h>
#include <string>

using namespace std;

int main()
{
    Aluno a1;
    Aluno a2;
    Aluno a3;
    ListaAlunos l1;


    a1.cadastra(20, 10042000192, 'M', 39391823190, "Julio");
    a2.cadastra(22, 15235745322, 'M', 39342824983, "Armando");
    a3.cadastra(20, 18234134632, 'F', 43165145190, "Fernanda");

    l1.InsereAluno(a1);
    l1.InsereAluno(a2);
    l1.InsereAluno(a3);

    Escola e1;

    e1.cadastra(89351784959, l1, "pH");
    l1.printAlunos();

    //l1.RemoveAluno(a2);
    //l1.printAlunos();

    //a1.Print();
    e1.printDadosEscola();

    return 0;
}
