#include "Aluno.h"
#include "Pessoa.h"

Aluno::Aluno()
{
}

Aluno::~Aluno()
{
}

void Aluno::cadastra(int p_idade, CPF p_cpf, char p_sexo, MATRICULA p_num_matricula)
{
    idade = p_idade;
    cpf = p_cpf;
    sexo = p_sexo;
    num_matricula = p_num_matricula;
}
