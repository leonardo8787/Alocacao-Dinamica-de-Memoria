#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Fila
struct estrutura{
    int dados [tamanho];
    int ini;
    int fim;
};

typedef struct cel celula;
struct cel {
    int dado;
    celula *prox;
};

//variaveis globais
struct estrutura fila;
struct estrutura pilha;
int op;

//prototipacao
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar ();
void pilha_mostrar();
void pilha_mover();
void lista();

//funcao principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    op=1;
    fila.ini=0;
    fila.fim=0;
    pilha.ini=0;
    pilha.fim=0;
    while(op!=0){
        system("cls");
        fila_mostrar();
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
        case 1:
            fila_entrar();
            break;
        case 2:
            fila_sair();
            break;
        case 3:
            pilha_mover();
            break;
        case 4:
            lista();
            break;
        }
    }
    return(0);
}

//add elemento no final da fila
void fila_entrar(){
    if(fila.fim==tamanho){
        printf("\nA fila está cheia\n");
        system("Pause");
    }else{
        printf("\nDigite o valor a ser inserido: ");
        scanf("%d", &fila.dados[fila.fim]);
        fila.fim++;
    }
}

//retirar o primeiro elemento da fila
void fila_sair(){
    if(fila.ini==fila.fim){
        printf("\nA fila esta vazia, adicione algum valor\n");
        system("Pause");
    }else{
        int i;
        for(i=0;i<tamanho;i++){
            fila.dados[i]=fila.dados[i+1];
        }
        fila.dados[fila.fim]=0;
        fila.fim--;
    }
}

//mostra o conteudo da fila
void fila_mostrar(){
    int i;
    printf("[ ");
    for(i=0;i<tamanho;i++){
        printf(" %d", fila.dados[i]);
    }
    printf(" ]\n\n");
}

//mostra o menu de opções
void menu_mostrar(){
    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");
    printf("\n\n");
    printf("Bincando com estruturas em C");
    printf("\n\n");
    printf("\nEscolha uma opção:\n");
    printf("1- Incluir na fila\n");
    printf("2- Excluir da fila\n");
    printf("3- Mover para a pilha\n");
    printf("4- Lista\n");
    printf("0-Sair\n\n");
}

//mostrar conteudo da pilha
void pilha_mostrar(){
    int i;
    printf("[ ");
    for(i=0;i<tamanho;i++){
        printf(" %d", pilha.dados[i]);
    }
    printf(" ]\n\n");
}

//mover para a pilha
void pilha_mover(){
    pilha.fim = fila.fim;

    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");

    do{
        if(fila.ini == fila.fim){
            printf("\nNada foi adicionado a fila para inverter\n\n");
            system("pause");
            break;
        }
        else{
            pilha.dados[pilha.ini]=fila.dados[pilha.fim];
            pilha.fim--;
            pilha.ini++;
        }
    }
    while (pilha.fim==0);
}

void insere (int x, celula *p)
{
    celula *nova;
    nova = (celula *) malloc (sizeof(celula));
    nova->dado = x;
    nova->prox = p->prox;
    p->prox = nova;
}

void imprime(celula *ini)
{
    celula *p;
    
    printf("\nValores na lista:\n");
    for (p = ini->prox; p != NULL; p = p->prox) {
        printf ("%d\t", p->dado);
    }
    
    printf ("\n");
}

void lista(){
    
    int op = -1, valor;
    
    celula *lista = NULL;
    
    lista = (celula *) malloc(sizeof(celula));
    
    while (op != 0) {
        printf("\nOpcoes disponıveis:\n");
        printf("\t1 p/ imprimir lista.\n");
        printf("\t2 p/ inserir novo elemento na lista.\n");
        printf("\t0 p/ encerrar.\n");
        
        printf("Entre opcao desejada: ");
        scanf("%d", &op);
        
        switch(op) {
            case 0:
                printf("\n\nTCHAU!\n");
                break;
            case 1:
                imprime(lista);
                break;
            case 2:
                printf("\nEntre valor a ser inserido na lista: ");
                scanf("%d", &valor);
                insere(valor, lista);
                break;
            default:
                printf("\n\nOPCAO INVALIDA!\n");
        }
    }
}