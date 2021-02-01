#include "test.h"

typedef struct num{
    int valor;
}Num;
typedef struct laco{
    Num item;
    struct laco* prox;
}Laco;
typedef struct pilha{
    Laco* topo;
    Laco* fundo;
    int tamanho;
}Pilha;

Pilha* IniciarPilha(){
    Pilha* p =(Pilha*)malloc(sizeof(Pilha));
    return p;
}

void FPVazia(Pilha* p){
    p->topo = (Laco*)malloc(sizeof(Laco));
    p->fundo = p->topo;
    p->topo->prox = NULL;
    p->tamanho = 0;
}

int Vazia (Pilha* p){
    return(p->topo==p->fundo);
}

void Empilha(Num* n, Pilha* p){
    Laco* aux;
    aux = (Laco*)malloc(sizeof(Laco));
    p->topo->item = *n;
    aux->prox = p->topo;
    p->topo = aux;
    p->tamanho++;

}
void Desempilha(Pilha* p,Num* n){
    Laco* l;
    if(Vazia(p)){
        printf("Erro: lista vazia \n");
        return;
    }
    l= p->topo;
    p->topo= l->prox;
    *n = l->prox->item;
    free(l);
    p->tamanho--;
}
int TamanhoPilha(Pilha* p){
    return p->tamanho;
}

void Imprime(Pilha* p){
    Laco* aux;
    aux=p->topo->prox;
    printf("Imprimindo pilha: \n");
    while(aux!=NULL){
        printf("%i \n",aux->item.valor);
        aux=aux->prox;
    }
}

Num* IniciarNum(int n){
    Num* item = (Num*)malloc(sizeof(Num));
    item->valor=n;
    return item;
}

Pilha* Inverter(Pilha* p){
    Pilha* p2 =IniciarPilha();
    FPVazia(p2);
    while(p->tamanho>0){
        Empilha(p->topo->prox,p2);
        Desempilha(p,p->topo);
    }
    return p2;
}

bool is_empty(Pilha* p){
    if(p->topo->prox==NULL)
        return  true;
    else
        return false;
}

