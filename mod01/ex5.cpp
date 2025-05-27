// Crie um programa que exiba um intervalo digitado pelo usuário.
// Por exemplo, ele digita 4 e 10 e o sistema retorna: 4,5,6,7,8,9,10 (for)
//Feito em 25/03

#include <iostream>

int main() {
    int menor, maior;
    
    std::cout<<"\nDigite um número: \n";
    std::cin>>menor;
    
    std::cout<<"\nDigite um número maior que o anterior: \n";
    std::cin>>maior;
    
    for(int i=menor; i <maior; i++){
        std::cout<<"\n"<<i;
    }

    return 0;
}