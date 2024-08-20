#include "catalogo.hpp"


bool catalogo::verificar_senha(std::string senha_inserida)
{
    std::string senha_catalago = "chave123";
    if(senha_inserida == senha_catalago)
        return true;
    return false; // adicionando retorno padrão para todas as saídas de caminho
}                 


void catalogo::adicionar_produto(const std::string& nome, int tipo, int faixa_preco, int estoque, int desconto) 
{
    std::ofstream arq("catalogo.txt", std::ios::out | std::ios::app); // Modificação aqui
    if (!arq) {
        std::cerr << "ERRO AO ABRIR O ARQUIVO!" << std::endl;
        return;
    }

    arq << nome << " " << tipo << " " << faixa_preco << " " << estoque << " " << desconto << std::endl; // Adiciona na próxima linha
    arq.close();

    // Atualiza os vetores de produtos conforme necessário
    
}


void catalogo::ler_arquivo()
{

    std::string temp_nome;
    int temp_tipo, temp_faixa_preco, temp_estoque, temp_desconto;

    std::ifstream arq("catalogo.txt");
    if (!arq) {
        std::cout << "ERRO AO ABRIR O ARQUIVO!" << std::endl;
    } else {
        while (arq >> temp_nome >> temp_tipo >> temp_faixa_preco >> temp_estoque >> temp_desconto) {
            produtos.push_back(new PRODUTO(temp_nome, temp_tipo, temp_faixa_preco, temp_estoque, temp_desconto));
        }
        arq.close();
    }
}


void catalogo::organizar_vetores()
{
    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getDesconto() == 1)     //New retorna um ponteiro que é adicionado no vetor
        {
            vetor_descontos.push_back(new PRODUTO(produtos[i]->getNome(),
                                                  produtos[i]->getTipo(),
                                                  produtos[i]->getPreco(),
                                                  produtos[i]->getEstoque(),
                                                  produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 1)     
        {
            vetor_eletrodomesticos.push_back(new eletrodomestico(produtos[i]->getNome(),
                                                                 produtos[i]->getTipo(),
                                                                 produtos[i]->getPreco(),
                                                                 produtos[i]->getEstoque(),
                                                                 produtos[i]->getDesconto()));
        }
    }
   
    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 2)    
        {
            vetor_moveis.push_back(new movel(produtos[i]->getNome(),
                                             produtos[i]->getTipo(),
                                             produtos[i]->getPreco(),
                                             produtos[i]->getEstoque(),
                                             produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 3)
        {
            vetor_decoracao.push_back(new decoracao(produtos[i]->getNome(),
                                                    produtos[i]->getTipo(),
                                                    produtos[i]->getPreco(),
                                                    produtos[i]->getEstoque(),
                                                    produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 4)
        {
            vetor_telefones.push_back(new telefone(produtos[i]->getNome(),
                                                   produtos[i]->getTipo(),
                                                   produtos[i]->getPreco(),
                                                   produtos[i]->getEstoque(),
                                                   produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 5)
        {
            vetor_livros.push_back(new livro(produtos[i]->getNome(),
                                             produtos[i]->getTipo(),
                                             produtos[i]->getPreco(),
                                             produtos[i]->getEstoque(),
                                             produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 6)
        {
            vetor_calcado.push_back(new calcado(produtos[i]->getNome(),
                                                produtos[i]->getTipo(),
                                                produtos[i]->getPreco(),
                                                produtos[i]->getEstoque(),
                                                produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 7)
        {
            vetor_disco.push_back(new disco(produtos[i]->getNome(),
                                            produtos[i]->getTipo(),
                                            produtos[i]->getPreco(),
                                            produtos[i]->getEstoque(),
                                            produtos[i]->getDesconto()));
        }
    }

    for(size_t i = 0; i < produtos.size(); i++) 
    { 
        if(produtos[i]->getTipo() == 8)
        {
            vetor_artEsportivo.push_back(new artigo_esportivo(produtos[i]->getNome(),
                                                              produtos[i]->getTipo(),
                                                              produtos[i]->getPreco(),
                                                              produtos[i]->getEstoque(),
                                                              produtos[i]->getDesconto()));
        }
    }
}


void catalogo::imprimir_produto_sem_desconto(int tipo, int preco) 
{
    switch (tipo)
    {
        case 1:
            for (size_t i = 0; i < vetor_eletrodomesticos.size(); i++) 
            {
                if (vetor_eletrodomesticos[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_eletrodomesticos[i]->getNome() << "Estoque: " << vetor_eletrodomesticos[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 2:
            for (size_t i = 0; i < vetor_moveis.size(); i++) 
            {
                if (vetor_moveis[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_moveis[i]->getNome() << "Estoque: " << vetor_moveis[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 3:
            for (size_t i = 0; i < vetor_decoracao.size(); i++) 
            {
                if (vetor_decoracao[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_decoracao[i]->getNome() << "Estoque: " << vetor_decoracao[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 4:
            for (size_t i = 0; i < vetor_telefones.size(); i++) 
            {
                if (vetor_telefones[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_telefones[i]->getNome() << "Estoque: " << vetor_telefones[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 5:
            for (size_t i = 0; i < vetor_livros.size(); i++) 
            {
                if (vetor_livros[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_livros[i]->getNome() << "Estoque: " << vetor_livros[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 6:
            for (size_t i = 0; i < vetor_calcado.size(); i++) 
            {
                if (vetor_calcado[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_calcado[i]->getNome() << "Estoque: " << vetor_calcado[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 7:
            for (size_t i = 0; i < vetor_disco.size(); i++) 
            {
                if (vetor_disco[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_disco[i]->getNome() << "Estoque: " << vetor_disco[i]->getEstoque() << std::endl;
                }
            }
            break;
        case 8:
            for (size_t i = 0; i < vetor_artEsportivo.size(); i++) 
            {
                if (vetor_artEsportivo[i]->getPreco() == preco) 
                {
                    std::cout << std::left << std::setw(25) << vetor_artEsportivo[i]->getNome() << "Estoque: " << vetor_artEsportivo[i]->getEstoque() << std::endl;
                }
            }
            break;
        default:
            std::cout<<"Tipo inválido!"<<std::endl;
    }
    
}


void catalogo::imprimir_produto_com_desconto() 
{
    std::cout <<""<< std::endl;
    for (size_t i = 0; i < vetor_descontos.size(); i++) {
        if (vetor_descontos[i]->getDesconto() == 1) {
            std::cout << std::left << std::setw(25) << vetor_descontos[i]->getNome() << "Estoque: " << vetor_descontos[i]->getEstoque() << std::endl;
        }
    }
}


void catalogo::liberar_memoria()
{
    for(size_t i=0;i<produtos.size();i++)
    {
        produtos[i]->~PRODUTO();
    }


    for(size_t i=0;i<vetor_eletrodomesticos.size();i++)
    {
        vetor_eletrodomesticos[i]->~eletrodomestico();
    }

    for(size_t i=0;i<vetor_moveis.size();i++)
    {
        vetor_moveis[i]->~movel();
    }

    for(size_t i=0;i<vetor_decoracao.size();i++)
    {
        vetor_decoracao[i]->~decoracao();
    }

    for(size_t i=0;i<vetor_telefones.size();i++)
    {
        vetor_telefones[i]->~telefone();
    }

    for(size_t i=0;i<vetor_livros.size();i++)
    {
        vetor_livros[i]->~livro();
    }

    for(size_t i=0;i<vetor_calcado.size();i++)
    {
        vetor_calcado[i]->~calcado();
    }

    for(size_t i=0;i<vetor_disco.size();i++)
    {
        vetor_disco[i]->~disco();
    }

    for(size_t i=0;i<vetor_artEsportivo.size();i++)
    {
        vetor_artEsportivo[i]->~artigo_esportivo();
    }
}


catalogo::~catalogo(){}