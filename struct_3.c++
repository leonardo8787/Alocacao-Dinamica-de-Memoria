#include<iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;
    
    void insere(string stnome, string stcor, int stpot, int stvelmax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        velMax=stvelmax;

    }
    void mostra(){
        cout << "Nome: " << nome <<endl;
        cout << "Cor: " << cor << endl;
        cout << "Potencia: " << pot <<endl;
        cout << "Velocidade Máxima: " << velMax <<endl<<endl;
    }
    void mudaVel(int mv){
        vel=mv;
        if(vel>velMax){
            vel=velMax;
        }
        if(vel<0){
            vel=0;
        }
    }
};

int main() {
    
    Carro *carros=new Carro[5];
    Carro car1, car2, car3, car4, car5;
    
    carros[0]=car1; carros[1]=car2; carros[2]=car3; carros[3]=car4; carros[4]=car5;
    
    carros[0].insere("Tornado", "Vermelho", 450, 350);
    carros[1].insere("Tornado", "Vermelho", 450, 350);
    carros[2].insere("Tornado", "Vermelho", 450, 350);
    carros[3].insere("Tornado", "Vermelho", 450, 350);
    carros[4].insere("Tornado", "Vermelho", 450, 350);
    
    for(int i=0; i<5; i++){
        carros[i].mostra();
    }
    
    return 0;
 }
