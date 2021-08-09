#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int const MAXTAM=1000;

int Frente, Tras;
int Fila[MAXTAM];

void Fila_Construtor(){
    Frente=0;
    Tras=-1;
}

bool Fila_Vazia(){
    if(Frente>Tras){
        return true;
    }else{
        return false;
    }
    
    
}

bool Fila_Cheia(){
    if(Tras==MAXTAM-1){
        return true;
    }else{
        return false;
    }
}

bool Fila_Enfileirar(int valor){
    if(Fila_Cheia()){
        return false;
    }else{
        Tras++;
        Fila[Tras]=valor;
        return true;
    }
}

bool Fila_Desenfileirada(int &valor){
    if(Fila_Vazia()){
        return false;
    }else{
        valor=Fila[Frente];
        Frente++;
        return true;
    }
}

int Fila_Tamanho(){
    return (Tras-Frente)+1;
}

int main(){
    int valor;
    Fila_Construtor();
    
    int a,b,x,y,i,j,k,n;
    long double C,F1=1, F2=2, F3=1, S=0;

    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");
    
    cout << " Coloque um valor a: "; cin >> a;
    cout << " Coloque um valor b: "; cin >> b;
    cout << " Coloque um valor x: "; cin >> x;
    cout << " Coloque um valor y: "; cin >> y;
    cout << " Coloque a potência: "; cin >> n;
    
    for(i=0; i<=n;i++){
        if(i==0){
            F1=1;
        }else{
            F1*=i;
        }
        for(j=0;j<=n;j++){
            if(j==0){
                F2=1;
            }
            else{
                F2*=j;
            }
        }
        for(k=0;k<=n-i;k++){
            if(k==0){
                F3=1;
            }
            else{
                F3*=k;
            }
        }
        C=F2/(F1*F3);
        S+=C*pow(a*x, n-i)*pow(b*y,i);
        Fila_Enfileirar(S);
    }
    cout<<"O valor do binômio é: "<<fixed<<setprecision(0)<<S<<endl;
    while(Fila_Desenfileirada(valor)){
        cout<<"valor: "<<valor<<endl;
    }
    cout<<"Tamanho da fila: "<<Fila_Tamanho()<<endl;
    //cout<<valor;
    system("pause");
    return 0;
}