#include <iostream>
#include <vector>

void printVector(std::vector<int> myVector) {
    int vectorSize = myVector.size();
    std::cout << "[";
    for(int i = 0; i < vectorSize; i++) {
        std::cout << myVector[i];
        if (i < vectorSize - 1) {
            std::cout << ",";    
        }
    }
    std::cout << "]" << std::endl;
}

int main()
{
    std::vector<int> pilha;
    int aux = 0;

    printf("Atividade 1 de Laboratório de AED\n");
    printf("Aluno: Leonardo de Oliveira Campos\n");
    printf("Engenharia de Computação\n");

    for(int i = 0; i < 5; i++){
       pilha.push_back(i);
    }
    
    printVector(pilha);
    int pilhaSize = pilha.size();
    
    for(int a = 0; a < pilhaSize/2; a++){
       std::cout << "loop qtts: " << pilhaSize/2 << std::endl;
       std::cout << "loop interações: " << a + 1 << std::endl;

       aux = pilha[(pilhaSize - 1) - a];
       std::cout << "aux: " << aux << std::endl;

       pilha[(pilhaSize - 1) - a] = pilha[a];

       pilha[a] = aux;

       printVector(pilha);
       aux = 0;
    }
    
    
    return 0;
}