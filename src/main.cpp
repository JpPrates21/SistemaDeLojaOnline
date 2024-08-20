#include <iostream>
#include <string>
#include <fstream>
#include "produtos.hpp"
#include "catalogo.hpp"

int main() {
    catalogo catalogo;
    catalogo.ler_arquivo();            
    catalogo.organizar_vetores();


        

    bool sair = false;
    while (!sair) {
        std::cout << "==================================================================================================" << std::endl;
        std::cout << "                                 Seja bem vindo(a) a nossa loja" << std::endl;
        std::cout << "Voce deseja adicionar um novo produto?" << std::endl;
        std::cout << "[1] Sim" << std::endl;
        std::cout << "[2] Nao" << std::endl;
        std::cout << "[0] Voltar" << std::endl;

        int escolha_adicionar = 0;
        std::cin >> escolha_adicionar;

        if (escolha_adicionar == 1) {
            std::string senha_inserida;
            bool acesso_permitido = false;

            while (!acesso_permitido) {
                std::cout << "Insira a senha para acessar o catalogo\n[0] Voltar\n";
                std::cin >> senha_inserida;

                if (senha_inserida == "0") {
                    break; // Volta para o início do loop
                }

                if (!catalogo.verificar_senha(senha_inserida)) {
                    std::cout << "Senha incorreta. Tente novamente." << std::endl;
                } else {
                    acesso_permitido = true;
                }
            }

            if (senha_inserida == "0") {
                continue; // Volta para o início do loop
            }

            std::string nome;
            int tipo, faixa_preco, estoque, desconto;

            std::cout << "Digite o nome do produto\n[0] Voltar\n";
            std::cin >> nome;
            if (nome == "0") {
                continue; // Volta para o início do loop
            }

            std::cout << "Digite o tipo do produto (1 - Eletrodomesticos, 2 - Moveis, 3 - Decoracoes," << std::endl;
            std::cout << "4 - Telefone, 5 - Livro, 6 - Calcado, 7 - Discos, 8 - Artigos Esportivos):\n[0] Voltar\n";
            std::cin >> tipo;
            if (tipo == 0) {
                continue; // Volta para o início do loop
            }

            std::cout << "Digite a faixa de preco do produto: ";
            std::cout << "\n[1] (1-200)" << std::endl;
            std::cout << "[2] (201-400)" << std::endl;
            std::cout << "[3] (401-600)" << std::endl;
            std::cout << "[4] (600-800+)" << std::endl;
            std::cout << "[0] Voltar" << std::endl;
            std::cin >> faixa_preco;
            if (faixa_preco == 0) {
                continue; // Volta para o início do loop
            }

            std::cout << "Digite o estoque do produto: ";
            std::cin >> estoque;

            std::cout << "O produto possui desconto? (1 - Sim, 0 - Nao): ";
            std::cin >> desconto;

            catalogo.adicionar_produto(nome, tipo, faixa_preco, estoque, desconto);
            std::cout << "Produto adicionado com sucesso" << std::endl;
        } else if (escolha_adicionar == 0) {
            continue; // Volta para o início do loop
        } else {
            std::cout << "Voce deseja ver os produtos em desconto?" << std::endl;
            std::cout << "[1] Sim" << std::endl;
            std::cout << "[2] Nao" << std::endl;
            std::cout << "[0] Voltar" << std::endl;

            int escolha_desconto = 0;
            std::cin >> escolha_desconto;

            if (escolha_desconto == 1) {
                catalogo.imprimir_produto_com_desconto();
            } else if (escolha_desconto == 0) {
                continue; // Volta para o início do loop
            } else {
                std::cout << "Que tipo de produto voce busca?" << std::endl;
                std::cout << "[1] Eletrodomesticos" << std::endl;
                std::cout << "[2] Moveis" << std::endl;
                std::cout << "[3] Decoracoes" << std::endl;
                std::cout << "[4] Telefones" << std::endl;
                std::cout << "[5] Livros" << std::endl;
                std::cout << "[6] Calcados" << std::endl;
                std::cout << "[7] Discos" << std::endl;
                std::cout << "[8] Artigos Esportivos" << std::endl;
                std::cout << "[0] Voltar" << std::endl;

                int escolha_tipo = 0;
                std::cin >> escolha_tipo;

                if (escolha_tipo == 0) {
                    continue; // Volta para o início do loop
                }

                std::cout << "Que faixa de preco voce deseja?" << std::endl;
                std::cout << "[1] (1-200)" << std::endl;
                std::cout << "[2] (201-400)" << std::endl;
                std::cout << "[3] (401-600)" << std::endl;
                std::cout << "[4] (600-800+)" << std::endl;
                std::cout << "[0] Voltar" << std::endl;

                int escolha_preco = 0;
                std::cin >> escolha_preco;

                if (escolha_preco == 0) {
                    continue; // Volta para o início do loop
                }

                catalogo.imprimir_produto_sem_desconto(escolha_tipo, escolha_preco);
            }
        }
        
        std::cout << "\nDeseja fazer mais alguma operacao?" << std::endl;
        std::cout << "[1] Sim" << std::endl;
        std::cout << "[2] Nao" << std::endl;
        int continuar;
        std::cin >> continuar;
        if (continuar == 2)
        {
            sair = true;
            catalogo.liberar_memoria();
        }
    }

    return 0;
}