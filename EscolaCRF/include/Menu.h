#ifndef MENU_H
#define MENU_H
#include <ListaAlunos.h>
#include <Escola.h>


class Menu
{
    public:
        Menu(ListaAlunos pl1, Escola pe1){l1 = pl1, e1 = pe1;};
        void Executa_opcao_1(ListaAlunos);
        void Executa_opcao_2(ListaAlunos);
        void Executa_opcao_3(ListaAlunos);
        void Executa_opcao_4(ListaAlunos);
        void Executa_opcao_5(ListaAlunos);
        void Executa_opcao_6(ListaAlunos);
        void Executa_opcao_7();
        void Apresenta_texto_menu();
        void Print();
        void atualiza_lista(ListaAlunos);

    protected:

    private:
        ListaAlunos l1;
        Escola e1;
};

#endif // MENU_H
