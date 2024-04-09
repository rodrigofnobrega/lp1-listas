// Exercı́cio 4. Escreva um programa que leia duas strings e imprima se elas são iguais ou diferentes.
#include<iostream>

int main() {
    std::string str1, str2;

    std::cout << "Informe a primeira string: ";
    std::cin >> str1;

    std::cout << "Informe a segunda string: ";
    std::cin >> str2;

    std::cout << "As strings são iguais: " << ((str1 == str2) ? "Verdadeiro" : "Falso") << std::endl;

    return 0;
}
