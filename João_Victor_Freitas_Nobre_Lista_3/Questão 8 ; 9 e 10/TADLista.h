#ifndef TADLISTA_H_INCLUDED
#define TADLISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#endif // TADLISTA_H_INCLUDED
#define num int

typedef struct Laco laco;
typedef struct Fila fila;

fila* criarFila(fila *q);
bool vazia(fila *q);
void tornarVazia(fila *q);
bool inserir(fila *q, num n);
bool remover(fila *q, num *n);
int size(fila *q);
bool inicioFila(fila *q, num *n);
void print(fila *q);
fila* concatenar(fila *f1, fila *f2);
