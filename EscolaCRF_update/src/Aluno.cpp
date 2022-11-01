#include "Aluno.h"
#include "Pessoa.h"
#include <iostream>


using namespace std;

void Aluno::cadastra(int p_idade, CPF p_cpf, char p_sexo, MATRICULA p_num_matricula, string pNome)
{
    nome = pNome;
    idade = p_idade;
    cpf = p_cpf;
    sexo = p_sexo;
    num_matricula = p_num_matricula;
}

void Aluno::Print()
{
    cout << "------------------------------------" << endl;
    cout << "         NOME DO ALUNO             " << endl;
    cout << nome << endl;
    cout << "------------------------------------" << endl;
    cout << "         CPF DO ALUNO             " << endl;
    cout << cpf << endl;
    cout << "------------------------------------" << endl;
    cout << "         IDADE DO ALUNO             " << endl;
    cout << idade << endl;
    cout << "------------------------------------" << endl;
}
