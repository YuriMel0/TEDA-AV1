#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::Executa_opcao_1(ListaAlunos l1)
    {
        string nome;
        int idade;
        CPF cpf;
        char sexo;
        MATRICULA matr;
        string categoria;
        Aluno A;

        cout << "Insira o nome do aluno:" << endl;
        cin >> nome;
        cout << "Insira a idade do aluno:" << endl;
        cin >> idade;
        cout << "Insira o sexo do aluno:" << endl;
        cin >> sexo;
        cout << "Insira o CPF do aluno:" << endl;
        cin >> cpf;
        cout << "Insira a matrícula do aluno:" << endl;
        cin >> matr;
        cout << "Informe se o aluno é do fundamental ou ensino médio: " << endl;
        cin >> categoria;

        A.cadastra(idade,cpf,sexo,matr,nome,categoria);
        l1.InsereAluno(A);
        atualiza_lista(l1);
        cout << "Aluno cadastrado com sucesso" << endl;
    }

void Menu::Executa_opcao_2(ListaAlunos l1)
    {
        Aluno A;
        MATRICULA matr;
        cout << "Insira a matrícula do aluno que você deseja consultar: " << endl;
        cin >> matr;

        A = l1.get_Aluno(matr);
        l1.printAluno(A);

    }

void Menu::Executa_opcao_3(ListaAlunos l1)
    {
        l1.printAlunos();
    }


void Menu::Executa_opcao_4(ListaAlunos l1)
    {
        Aluno A;
        MATRICULA matr;
        if (l1.get_tam() == 0)
        {
            cout << "Não existem alunos no sistema" << endl;
        }
        else{
        cout << "Insira a matrícula do aluno que você deseja remover: " << endl;
        cin >> matr;

        A = l1.get_Aluno(matr);
        l1.RemoveAluno(A);
        atualiza_lista(l1);
        cout << "Aluno removido com sucesso" << endl;
    }
    }


void Menu::Executa_opcao_5(ListaAlunos l1)
    {
        Aluno A;
        MATRICULA matr;
        int nidade;
        cout << "Insira a matrícula do aluno que você deseja alterar a idade: " << endl;
        cin >> matr;
        cout << "Insira a nova idade do aluno: " << endl;
        cin >> nidade;

        A = l1.get_Aluno(matr);
        l1.atualiza_idade(A, nidade);
        atualiza_lista(l1);
        cout << "Idade atualizada com sucesso" << endl;
    }

void Menu::Executa_opcao_6(ListaAlunos l1)
    {
        Aluno A;
        MATRICULA matr;
        cout << "Insira a matrícula do aluno que passou para o Ensino Médio: " << endl;
        cin >> matr;

        A = l1.get_Aluno(matr);
        l1.atualiza_categoria(A);
        atualiza_lista(l1);
        cout << "Categoria atualizada com sucesso" << endl;
    }

void Menu::Executa_opcao_7()
    {
        e1.printDadosEscola();
    }

void Menu::Apresenta_texto_menu(void)
    {
        cout << "+----------------------------------+" << endl;
        cout << "1 - Cadastrar Aluno" << endl;
        cout << "2 - Consulta Aluno" << endl;
        cout << "3 - Consulta a lista de alunos" << endl;
        cout << "4 - Cancela Matrícula" << endl;
        cout << "5 - Atualiza idade" << endl;
        cout << "6 - Atualiza categoria" << endl;
        cout << "7 - Imprimir dados da escola" << endl;
        cout << "+----------------------------------+" << endl;
        cout << "+ aperte a tecla 's' para sair" << endl;
        cout << "+----------------------------------+" << endl;
    }

void Menu::Print()
    {
        char opcao_escolhida;

        do {
            Apresenta_texto_menu();
            cin >> opcao_escolhida;
            switch (opcao_escolhida) {
                case '1' : Executa_opcao_1(l1); break;
                case '2' : Executa_opcao_2(l1); break;
                case '3' : Executa_opcao_3(l1); break;
                case '4' : Executa_opcao_4(l1); break;
                case '5' : Executa_opcao_5(l1); break;
                case '6' : Executa_opcao_6(l1); break;
                case '7' : Executa_opcao_7(); break;
                case 's' : break;
                default  : cout << "Opcao invalida, tente novamente, ou 's' para sair" << endl;
            }
        } while (opcao_escolhida != 's');
    }

void Menu::atualiza_lista(ListaAlunos Cl1)
    {
        l1 = Cl1;
    }
