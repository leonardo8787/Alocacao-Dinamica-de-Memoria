// Lista

#include<iostream>
#include<list>

using namespace std;

int main() {
    
    list<int> aula; //uma lista
    int tam;
    list<int>::iterator it;
    //list<int> aula, canal, code; //3 listas na mesma 
    
    tam=10;
    for(int i=0; i<tam; i++){
        //aula.push_front(i); -> mostra a lista de frente
        aula.push_back(i);
    }
    
    //aula.clear();//lismpa a lista
    
    it=aula.begin();
    advance(it,5);
    aula.insert(it,0);
    
    aula.erase(it);// remove uma posição pré definida
    
    cout<<"Tamanho da lista: "<<aula.size()<<endl<<endl;
    aula.sort();
    
    
    //aula.reverse(); ->inverte ordem
    tam=aula.size();
    for(int i=0; i<tam; i++){
        cout<<aula.front()<<endl;
        aula.pop_front();
    }
    
    return 0;
}
