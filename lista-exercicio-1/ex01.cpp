// Exercı́cio 1. Crie uma classe Cachorro com os atributos nome, raça, idade e cor. 
// Implemente métodos para definir e obter esses valores, além de um método para latir.

#include<iostream>

class Cachorro {
    private:
        int idade;
        std::string nome, raca, cor;
    public:
        Cachorro(const std::string& nome_, const std::string& raca_, const std::string&cor_, int idade_) 
            : nome(nome_), raca(raca_), cor(cor_), idade(idade_) {}  

        std::string latir() {
            return "auau\n";
        }

        std::string caracteristicas() {
            std::string informacoes;
            informacoes += "Nome: " + nome + "\n";
            informacoes += "Raça: " + raca + "\n";
            informacoes += "Cor: " + cor + "\n";
            informacoes += "Idade: " + std::to_string(idade) + "\n";

            return informacoes; 
        }

        std::string getNome() {
            return nome;
        }

        std::string getRaca() {
            return raca;
        }

        std::string getCor() {
            return cor;
        }

        int getIdade() {
            return idade;
        }

        void setNome(std::string nome) {
            this->nome = nome;
        }

        void setRaca(std::string raca) {
            this->raca = raca;
        }

        void setCor(std::string cor) {
            this->cor = cor;
        }

        void setIdade(int idade) {
            this->idade = idade;
        }
};

int main() {
    Cachorro cachorro1("Adolfo", "Golden Retriever", "Dourado", 3);
    std::cout << cachorro1.caracteristicas() << std::endl;
    cachorro1.latir();
    cachorro1.setNome("Cleiton");
    cachorro1.setRaca("Pincher");
    cachorro1.setCor("Preto");
    cachorro1.setIdade(1);
    std::cout << cachorro1.caracteristicas() << std::endl;
    cachorro1.latir();

    return 0;
}