#include "Pessoa.h"

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}

void Pessoa::cadastra(int p_idade, CPF p_cpf, char p_sexo)
{
    idade = p_idade;
    cpf = p_cpf;
    sexo = p_sexo;
}
