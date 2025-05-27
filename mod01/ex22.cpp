//Crie uma matriz de [6][2] e outra de [2][5]

#include <iostream>
using namespace std;

int main(){
    int Matriz[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    for (int linha = 0; linha < 2; ++linha) {

        for (int coluna = 0; coluna < 5; ++coluna) {
            cout << "\nMatriz [" << linha << "][" << coluna << "] = " << Matriz[linha][coluna] << endl;
        }
    }
    return 0;
}