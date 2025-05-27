//Validar Senha
//Feito em 18/03

// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

int main() {
    std::string senha = "programa";
    std::string tentativa;
    
    for(int i=0; i<3; i++){
        std::cout << "Digite a senha: ";
        std::cin >> tentativa;
    
        if (senha == tentativa) {
            std::cout << "Senha correta!"<< std::endl;
            break;
        } else {
            std::cout << "Senha incorreta." << std::endl;
        }
    }

    return 0;
}