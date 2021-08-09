// resumo de fila

#include<iostream>
#include<queue>

using namespace std;

int main() {
    
    queue <string> cartas;
    
    cartas.push("Rei de Copas");
    cartas.push("Rei de ESpadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");
    
    cout<<"tamanho da fila: "<<cartas.size()<<endl;
    cout<<"Primeira Carta: "<<cartas.front()<<endl;
    cout<<"Última carta: "<<cartas.front()<<endl<<endl;
    
    while(!cartas.empty()){
        cout<<"Primeira Carta: "<<cartas.front()<<endl;
        cartas.pop();
    }
    
    /*
    empty -> vazio
    size -> tamanho
    front ->
    back ->
    push ->
    pop ->
    */
    
    return 0;
}
