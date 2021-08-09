#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    char caracter;
    struct no *proximo;
}No;

No* empilha(No *pilha, char valor){
    No *novo = malloc(sizeof(No));
    
    if(novo){
        novo -> caracter = valor;
        novo -> proximo = pilha;
        return novo;
    }else
        printf("\nErro ao alocar memória!\n");
    return NULL;
    
}

No* desempilhar(No **pilha){
    No *remover;
    if(*pilha){
        remover = *pilha;
        *pilha = remover -> proximo;
    }
    else
        printf("\n Pilha vazia \n");
    return remover;
}

void imprimir(No *pilha){
    printf("\nPilha\n");
    while(pilha){
        printf("\n%c\n", pilha->caracter);
        pilha = pilha->proximo;
    }
    printf("\nFim pilha\n");
}

int forma_par(char f, char d){
    switch(f){
        case ')':
            if(d == '(')
                return 1; //expreção bem formada
            else 
                return 0; //expreção mau formada 
            break;
    }
}

int identifica_formacao(char x[]){
    int i=0;
    No *pilha=NULL;
    No *remover;
    
    while(x[i] != '\0'){
        if(x[i] == '('){
            pilha = empilha(pilha, x[i]);
            imprimir(pilha);
        }
        else if(x[i] == ')'){
            remover = desempilhar(&pilha);
            if(forma_par(x[i], remover->caracter) == 0){
                printf("\nExpressão mal formada\n");
                return 1;
            }
            free(remover);
        }
        i++;
    }
    imprimir(pilha);
    if(pilha){
        printf("\nExpressão errada\n");
        return 1;
    }else{
        printf("\nExpressão certa\n");
        return 0;
    }
}

int main(){
    char exp[50];

    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");
    
    printf("\nDigite uma expressão: \n");
    scanf("%s49[^]", exp);
    printf("Expressão: %s\n Retorno: %s", exp, identifica_formacao);
    
    return 0;
}