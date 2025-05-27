// Altere o programa anterior para mostrar no final a soma dos números.
// Ex.: Recebe 3 e 10. Imprime 4, 5, 6, 7, 8, 9. Imprime a soma: 39.
//Feito em 25/03

#include <iostream>

int main() {
    int menor, maior, soma;
    
    std::cout<<"\nDigite um número: \n";
    std::cin>>menor;
    
    std::cout<<"\nDigite um número maior que o anterior: \n";
    std::cin>>maior;
    
    for(int i=menor; i <maior; i++){
        std::cout<<"\n"<<i;
        soma=soma+i;
    }
    
    std::cout<<"\nA soma é:"<<soma;

    return 0;
}