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
    
    Carro car1, car2;
    
    car1.insere("tornado", "vermelho", 450, 350);
    car2.insere("Luxo", "verde", 200, 200);
    
    car1.mostra();
    car2.mostra();
    
    return 0;
}
