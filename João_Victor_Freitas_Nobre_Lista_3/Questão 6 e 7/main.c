#include <stdio.h>
#include <stdlib.h>
#include "test.c"
#include "test.h"

int main()
{
    Pilha* p=IniciarPilha();
    FPVazia(p);
    printf("Verificando se Pilha esta Vazia\n1=Pilha vazia \n0=Pilha Nao vazia\nresultado: %d \n",is_empty(p));

    printf("Preenchendo PILHA... \n");
    Num* n1=IniciarNum(1);
    Num* n2=IniciarNum(2);
    Num* n3=IniciarNum(3);

    Empilha(n1,p);
    Empilha(n2,p);
    Empilha(n3,p);

    Imprime(p);
    printf("Verificando se Pilha esta Vazia\n1=Pilha vazia \n0=Pilha Nao vazia\nresultado: %d \n",is_empty(p));

    printf("Invertendo PILHA...\n");
    p=Inverter(p);
    Imprime(p);

    return 0;
}
