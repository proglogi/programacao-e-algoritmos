// Declaração de Variáveis
//Feito em 18/03

#include <iostream>
    //iostream: biblioteca
int main(){
    //declare as variáveis
    int i;
    //escreva ou imprima valor
    //std::cout<< "Digite um número: ";
    //leia
    //std::cin >> i;
    for (int i=0; i<=100; i++){
        if (i%3 == 0){
            std::cout << "MOD 3 ==" <<i;
        } else if (i%5 == 0){
            std::cout << "MOD 5 ==" <<i;
        }else{}
    }
    return 0;
}