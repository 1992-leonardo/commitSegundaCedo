#include <iostream>

int main(){
    double nota;
    std::cout << "Digite a nota do aluno: " << std::endl;
    std::cin >> nota;

    if(nota <= 5.5)
    {
        std::cout << "O aluno foi reprovado" << std::endl;
    }
    else if(nota > 5.5 && nota <= 6.5)
    {
        std::cout << "O aluno esta de recuperacao! " << std::endl;
    }
    else 
    {
        std::cout << "O aluno foi aprovado!" << std::endl;
    }

}