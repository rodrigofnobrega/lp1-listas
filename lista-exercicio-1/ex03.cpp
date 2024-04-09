// Exercı́cio 3. Crie uma classe Conta abstrata com os métodos depositar(), sacar() e consultarSaldo().
// Crie classes herdeiras para ContaCorrente e ContaPoupanca, implementando os métodos abstratos da classe Conta.

#include<iostream>

class Conta {
    public:
        virtual std::string depositar() const = 0;
        virtual std::string sacar() const = 0;
        virtual std::string consultarSaldo() const = 0;
};

class ContaCorrente : public Conta {
    public:
        std::string depositar() const override {
            return "Depositar na conta corrente\n";
        }

        std::string sacar() const override {
            return "Sacar da conta corrente\n";
        }

        std::string consultarSaldo() const override {
            return "Conta corrente: Não sabo\n";
        }
};

class ContaPoupanca : public Conta {
    public:
        std::string depositar() const override {
            return "Depositar na conta poupança\n";
        }

        std::string sacar() const override {
            return "Sacar da conta poupança\n";
        }

        std::string consultarSaldo() const override {
            return "Conta poupança: Insuficiente\n";
        }
};

int main() {
    ContaCorrente contaCorrente;
    Conta* contaPoupanca = new ContaPoupanca(); 

    std::cout << contaCorrente.consultarSaldo();
    std::cout << contaCorrente.depositar();
    std::cout << contaCorrente.sacar();
    std::cout << std::endl;
    std::cout << contaPoupanca->consultarSaldo();
    std::cout << contaPoupanca->depositar();
    std::cout << contaPoupanca->sacar();

    return 0;
}