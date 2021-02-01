#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#endif // TEST_H_INCLUDED

typedef struct pilha Pilha;
typedef struct num  Num;
typedef struct laco Laco;

Pilha* IniciarPilha();
void FPVazia(Pilha* p);
int Vazia (Pilha* p);
void Empilha(Num* n, Pilha* p);
void Desempilha(Pilha* p,Num* n);
int TamanhoPilha(Pilha* p);
void Imprime(Pilha* p);
Num* IniciarNum(int n);
Pilha* Inverter(Pilha* p);
bool is_empty(Pilha* p);
