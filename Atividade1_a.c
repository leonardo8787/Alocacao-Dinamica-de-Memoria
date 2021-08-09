
#include<stdio.h>
#include<stdlib.h>

typedef struct ponto{
    int x, y;
    struct ponto * proximo;
}t_ponto;       

//void problema1(int argc, char *argv[]){
  int main(int argc, char *argv[]){  
    t_ponto *ini_ponto;
    t_ponto *proximo_ponto;
    int resp;
    
    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");

    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL)
        exit(1);
    proximo_ponto = ini_ponto;
    
    while(1){
        printf("Digite x: ");
        scanf("%d", &proximo_ponto->x);
        printf("Digite y: ");
        scanf("%d", &proximo_ponto->y);
        printf("Deseja continuar: <1>sim <outro valor>não:");
        scanf("%d", &resp);
        if(resp == 1){
            proximo_ponto->proximo = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto->proximo;
        }else
            break;
    }
    
    proximo_ponto->proximo = NULL;
    proximo_ponto = ini_ponto;
    
    while(proximo_ponto != NULL){
        printf("x: %d, y: %d\n", proximo_ponto->x, proximo_ponto->y);
        proximo_ponto = proximo_ponto -> proximo;
    }
    
    return 0;
}