// Exercı́cio 2. Crie uma classe ContaCorrente com os atributos saldo, número da conta e nome do titular. 
// Implemente métodos para depositar, sacar e consultar o saldo.

#include<iostream>

class ContaCorrente {
    private:
        float saldo;
        int numeroConta;
        std::string nomeTitular;

    public:
        ContaCorrente(float saldo_, int numeroConta_, const std::string nomeTitular_)
            : saldo(saldo_), numeroConta(numeroConta_), nomeTitular(nomeTitular_) {}

        bool depositar(int valor) {
            saldo += valor;

            return true;
        }

        bool sacar(int valor) {
            if (saldo >= valor) {
                saldo -= valor;

                return true;
            }

            return false;
        }

        float consultarSaldo() {
            return saldo;
        }

        std::string toString() {
            std::string info;
            info += "Número da Conta: " + std::to_string(numeroConta) + "\n";
            info += "Nome do Titular: " + nomeTitular + "\n";
            info += "Saldo: " + std::to_string(saldo) + "\n";
            return info;
        }
};

int main() {
    ContaCorrente conta(0.0, 1234, "Usuário");
    int operacao;
    char pausa;

    do {
        std::cout << "1 - Consultar saldo" << std::endl;
        std::cout << "2 - Realizar depósito" << std::endl;
        std::cout << "3 - Realizar saque" << std::endl;
        std::cout << "4 - Obter informações da conta" << std::endl;
        std::cout << "5 - Finalizar operações" << std::endl;
        std::cout << "Informe a operação: ";
        std::cin >> operacao;
        std::cout << std::endl;

        switch (operacao) {
            case 1:
                std::cout << "Seu saldo é: R$" << conta.consultarSaldo() << std::endl;
                break;

            case 2:
                float valorDeposito;
                std::cout << "Informe o valor do depósito: R$";
                std::cin >> valorDeposito;

                conta.depositar(valorDeposito);

                break;
            
            case 3:
                float valorSaque;
                std::cout << "Informe o valor do saque: R$";
                std::cin >> valorSaque;

                std::cout << ((conta.sacar(valorSaque)) ? "Saque realizado com sucesso" : "Saldo insuficiente");

                break;
            
            case 4:
                std::cout << conta.toString();

                break;
            default:
                break;
        }
        std::cout << std::endl;
        
    } while(operacao != 5);

    return 0;
}