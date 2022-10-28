#include <iostream>
#include <string>
#include <t_Dado.h>
#include <t_No.h>
#include <t_Lista.h>
#include <t_Pilha.h>

using namespace std;

int main()
{
    t_Pilha<int> p;
    int top;
    p.Put(3);
    p.Put(6);
    p.Put(15);
    //p.LerTopo();
    p.Print();
    top = p.RemoveTopo();
    cout << "topo removido: " << top << endl;
    p.Print();
    return 0;
}
