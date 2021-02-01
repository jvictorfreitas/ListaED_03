#include "TADLista.h"

typedef struct Laco{
    num info;
    struct Laco* prox;
}laco;

typedef struct Fila{
    laco *inicio;
    laco *fim;
}fila;

fila* criarFila(fila *q){
    q = (fila*)malloc(sizeof(fila));
    q->inicio = NULL;
    q->fim = NULL;
    return q;
}

bool vazia(fila *q){
    return (q->inicio==NULL);
}


void tornarVazia(fila *q){
    laco *ndel, *nextLaco;
        if(!vazia(q))
            nextLaco = q->inicio;
        while(nextLaco!=NULL){
            ndel=nextLaco;
            nextLaco = nextLaco->prox;
            free(ndel);
        }
}

bool inserir(fila *q, num n){
    laco *aux;
    aux = malloc(sizeof(laco));
    if(aux == NULL)
        return false;

    aux->info = n;
    aux->prox = NULL;
    if(vazia(q))
        q->inicio = aux;
    else
        q->fim->prox = aux;
    q->fim = aux;

    return true;
}

bool remover(fila *q, num *n){
    laco *aux;
    if(vazia(q))
        return false;
    aux = q->inicio;
    *n = aux->info;
    q->inicio = aux->prox;
    if(q->inicio==NULL)
        q->fim=NULL;
    free(aux);
    return true;
}

int size(fila *q){
    laco *aux;
    int cont = 0;
    aux = q->inicio;
    while(aux!=NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

bool inicioFila(fila *q, num *n){
    if(vazia(q))
        return false;
    *n = q->inicio->info;
    return true;
}
void print(fila *q){
    if(vazia(q))
        return;
    laco *aux;
    aux = q->inicio;
    while(aux!=NULL){
        printf("%i \n",aux->info);
        aux = aux->prox;
    }
}

fila* concatenar(fila *f1, fila *f2){
    if(vazia(f1)||vazia(f2))
        return;
    laco *aux;
    aux = f2->inicio;
    while(aux!=NULL){
        inserir(f1,aux->info);
        aux = aux->prox;
    }
    tornarVazia(f2);
    return f1;
}
