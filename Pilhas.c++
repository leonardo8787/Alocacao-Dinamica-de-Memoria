// Treinamento com Pilhas

#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack <string> cartas;
    

    
    cartas.push("Rei de Copas");
    cartas.push("Rei de ESpadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");
    
    if(cartas.empty()){
        cout<<"Pilha vazia\n\n";
    }else{
        cout<<"Pilha com cartas\n\n";
    }
    
    cout<<"Tamanho da pilha: "<<cartas.size()<<"\n";//mostra elementos da pilha
    
    cout<<"Cartas do topo: "<<cartas.top()<<endl;
    
    cartas.pop();//tira elementos da pilha
    
    cout<<"Nova carta do topo: "<<cartas.top()<<"\n";
    cout<<"Tamanho d pilha: "<<cartas.size()<<"\n";
    
    push(); //adiciona elemento na pilha
    pop(); //retira elemento do topo
    top(); //qual elemento está no topo
    size(); //tamanho da pilha
    empty();//retorna verdadeiro ou falso caso a pilha esteja cheia ou vazia
    
    return 0;
}
