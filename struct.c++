// struct

#include<iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main() {
    
    Carro car1;
    
    car1.nome="tornado";
    car1.cor="vermelho";
    car1.pot=450;
    car1.velMax=350;
    
    cout << "Nome.................:" << car1.nome << endl;
    cout << "Cor..................:" << car1.cor << endl;
    cout << "Potencia.............:" << car1.pot << endl;
    cout << "Velocidade Máxima....:" << car1.velMax << endl;
    
    return 0;
}
