#include<iostream>
#include<set>

void lerConjunto(int quantidadeElementos, std::set<std::string> *conjunto);
std::string maiorString(std::set<std::string> *conjunto);

int main() {
    std::set<std::string> conjuntoStrings;
    std::string maior;
    int quantidadeElementos = 0;

    std::cout << "Informe a quantidade de elementos: ";
    std::cin >> quantidadeElementos;

    if (quantidadeElementos <= 0) {
        std::cout << "Quantidade de elementos inválida: " << std::endl;
    } else {
        lerConjunto(quantidadeElementos, &conjuntoStrings);
        maior = maiorString(&conjuntoStrings);

        std::cout << "A maior string é: " << maior << std::endl;
    }
    
    return 0;
}

void lerConjunto(int quantidadeElementos, std::set<std::string> *conjunto) {
    std::string str;

    for (int i = 0; i < quantidadeElementos; i++)
    {
        std::cout << "Digite o elemento " << i+1 << ": ";
        std::cin >> str;
        conjunto->insert(str);
    }
}

std::string maiorString(std::set<std::string> *conjunto) {
    if (conjunto->empty()) {
        return ""; 
    }

    std::string maior = *conjunto->begin();

    for (auto i = conjunto->begin(); i != conjunto->end(); ++i) {
        if (i->size() > maior.size()) {
            maior = *i;
        }
    }

    return maior;
}
