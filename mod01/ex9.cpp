// Crie um programa de Tabuada de todos os nºs 1-9 (Lista 3, ex. 5)
//Feito em 01/04

#include <iostream>

int main() {
    int tabuada;
    
    std::cout << "\nEscolha uma tabuada | Digite um número: ";
    std::cin >>tabuada;
    
    for (int i=0; i<=10; i++){
    std::cout <<"\n" <<i <<"x"<<tabuada<<"="<<tabuada*i;
    }
    
    
    return 0;
}