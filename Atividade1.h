#ifndef ATIVIDADE1_H 
#define ATIVIDADE1_H 

#include<stdio.h>
#include<stdlib.h>

typedef struct ponto t_ponto;
typedef struct ponto{
    int x, y;
    t_ponto * proximo;
};

void problema1();

#endif