//Crie um programa que o usuário insira os valores da matriz valor
//Usar estrutura de decisão (for), índices e matrizes (valor[2][3])

#include <iostream> 
 
int main() { 
    const int linhas = 2, colunas = 3; 
    int valor[linhas][colunas]; 
     
    std::cout << "Insira os valores da matriz 2x3: \n"; 
     
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            std::cout << "Valor[" << i << "][" << j << "]: "; 
            std:: cin >> valor[i][j]; 
        } 
    } 
     
    std::cout << "\nMatriz inserida: \n"; 
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            std::cout << valor [i][j] << " "; 
        } 
        std::cout << std::endl; 
    } 
     
    return 0; 
} 

 

 

//Solução: 

//#include <iostream> 
//using namespace std; 
     
//int main () { 
//    int valor [2][3]; 
//    cout<< "Digite os valores da matriz [2][3]: \n"; 
//    for (int i=0; i < 2; i++) { 
//        for (int j=0; j < 3; j++) { 
//            cout<< "Valor["<<i<<"]["<<j<<"]\n"; 
//            cin>> valor[i][j]; //até aqui, apenas capturamos o valor 
//        } 
//    } 
     
    //Exibir o que já populei 
//    cout<< "Valores digitados: \n"; 
//    for (int i=0; i < 2; i++) { 
//        for (int j=0; j < 3; j++) { 
//            cout<< valor [i][j]; 
//        } 
//    } 
     
//    return 0;    
//} 