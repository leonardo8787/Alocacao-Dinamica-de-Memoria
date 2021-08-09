#include<iostream>

using namespace std;

int main(){
    
    string veiculo="Carro";
    string *pv;
    
    pv=&veiculo;
    
    cout << pv << endl << &veiculo;
    
    *pv="Moto";
    
    cout << endl << veiculo << endl << *pv;
    
    return 0;
}
