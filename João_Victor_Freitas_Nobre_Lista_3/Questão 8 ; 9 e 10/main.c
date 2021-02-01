#include "TADLista.h"
#include "TADLista.c"
int main()
{
    fila *f1, *f2;
    printf("Criando fila f1...\n");
    f1=criarFila(f1);

    printf("Inserindo elementos em f1...\n");
    inserir(f1,1);
    inserir(f1,2);
    inserir(f1,3);

    printf("Quantidade de elementos na FILA f1: %i\n",size(f1));
    printf("Mostrando Fila f1:\n");
    print(f1);

    printf("Criando fila f2...\n");
    f2=criarFila(f2);

    printf("Inserindo elementos em f2...\n");
    inserir(f2,4);
    inserir(f2,5);
    inserir(f2,6);

    printf("Quantidade de elementos na FILA f2: %i\n",size(f2));
    printf("Mostrando Fila f2:\n");
    print(f2);


    printf("concatenando Filas f1 e f2...\n");
    concatenar(f1,f2);
    printf("Monstrando nova fila:\n");
    print(f1);


    printf("Esvaziando Filas...\n");
    tornarVazia(f1);
    tornarVazia(f2);
    return 0;
}
