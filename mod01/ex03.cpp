// Faça um programa que receba 2 números, base e expoente, calcule e mostre o primeiro número elevado pelo segundo 
// Multiplicar a base por ela mesma (quantidade x do expoente).
// Exemplo: Base 2, Expoente 5 | 2^5= 2x 2x 2x 2x 2x
//Feito em 25/03

#include <iostream>

int main() {
    int base, expoente, res=1;
    
    std::cout<<"Digite um número para a base: ";
    std::cin>>base;
    
    std::cout<<"Digite um número para o expoente: ";
    std::cin>>expoente;
    
    for (int i = 1;  i <= expoente; i++){
    res = res*base;
    }
    
    std::cout<<"O resultado é: "<<res;
    
    return 0;
}