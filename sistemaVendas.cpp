// sistemaVendas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>



const int NUM_VENDEDORES = 4;
const int NUM_PRODUTOS = 5;

int main() {
    double vendas[NUM_PRODUTOS][NUM_VENDEDORES] = { 0.0 }; // Inicializa o array bidimensional com zeros

    // Simulação de leitura das informações de vendas do último mês
    // Aqui você pode implementar a lógica para ler os dados do mês passado

    // Suponhamos que você tenha as informações de vendas em algum formato
    // e que agora você vai inseri-las manualmente para fins de exemplo:

    // Inserir informações de vendas manualmente (simulação)
    vendas[0][0] = 100.0; // Vendedor 1, Produto 1, Valor de venda
    vendas[1][2] = 150.0; // Vendedor 3, Produto 2, Valor de venda
    // ... inserir todas as informações de vendas aqui

    // Calculando as somas por vendedor e por produto
    double totalPorVendedor[NUM_VENDEDORES] = { 0.0 };
    double totalPorProduto[NUM_PRODUTOS] = { 0.0 };

    for (int vendedor = 0; vendedor < NUM_VENDEDORES; ++vendedor) {
        for (int produto = 0; produto < NUM_PRODUTOS; ++produto) {
            totalPorVendedor[vendedor] += vendas[produto][vendedor];
            totalPorProduto[produto] += vendas[produto][vendedor];
        }
    }

    // Imprimindo os resultados em forma de tabela
    std::cout << "Vendas por Vendedor e por Produto no Último Mês:\n\n";
    std::cout << "Produtos\\Vendedores\t";
    for (int vendedor = 0; vendedor < NUM_VENDEDORES; ++vendedor) {
        std::cout << "Vendedor " << (vendedor + 1) << "\t";
    }
    std::cout << "Total por Produto\n";

    for (int produto = 0; produto < NUM_PRODUTOS; ++produto) {
        std::cout << "Produto " << (produto + 1) << ":\t\t\t";
        for (int vendedor = 0; vendedor < NUM_VENDEDORES; ++vendedor) {
            std::cout << vendas[produto][vendedor] << "\t\t";
        }
        std::cout << totalPorProduto[produto] << "\n";
    }

    // Imprimindo os totais por vendedor
    std::cout << "\nTotal por Vendedor:\t";
    for (int vendedor = 0; vendedor < NUM_VENDEDORES; ++vendedor) {
        std::cout << totalPorVendedor[vendedor] << "\t";
    }
    std::cout << "\n";

    return 0;
}
