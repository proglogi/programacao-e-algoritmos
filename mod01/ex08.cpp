// Crie um programa que o usuário tenha as opções de calcular a área de um triângulo, de um trapézio ou de um quadrado.
//Feito em 01/04

#include <iostream>

int main() {
    double opcao=0, base, altura, basem;
    
    std::cout << "Cálculo de área. \n\nEscolha: \n1. Área triângulo \n2. Área trapézio \n3. Área quadrado \n\nDigite o nº da forma escolhida: \n";
    std::cin >>opcao;
    
    if (opcao==1){
        std::cout <<"Digite a base: ";
        std::cin >>base;
        std::cout <<"Digite a altura: ";
        std::cin >>altura;
        std::cout <<"A área é: "<< base*altura/2;
    } 
        else if (opcao==2) {
            std::cout <<"Digite a base maior: ";
            std::cin >>basem;
            std::cout <<"Digite a base menor: ";
            std::cin >>base;
            std::cout <<"Digite a altura: ";
            std::cin >>altura;
            std::cout <<"A área é: "<< (basem+base)*altura/2;
    } 
        else if (opcao==3){
            std::cout <<"Digite a base: ";
            std::cin >>base;
            std::cout <<"Digite a altura: ";
            std::cin >>altura;
            std::cout <<"A área é: "<< base*altura;
    }else{
        std::cout <<"\nOpção indisponível.";
    }
    
    return 0;
}