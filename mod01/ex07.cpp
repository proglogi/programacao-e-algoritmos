// Crie um programa que peça 2 números para o usuário e faça as 4 operações: +, -, % e *
//Feito em 25/03

#include <iostream>

int main() {
    int num1;
    int num2;
    
    // entrada e exibe
    std::cout << "Digite o 1º número: ";
    //guarda
    std::cin >>num1;
   
    std::cout << "Digite o 2º número: ";
    std::cin >>num2;

    std::cout << "\nSoma: "<< num1+num2;
    
    int sub = num1-num2;
    std::cout << "\nSubtração: "<< sub;
    std::cout << "\nMultiplicação: "<< num1*num2;
    std::cout << "\nDivisão: "<< num1/num2;
    return 0;
}