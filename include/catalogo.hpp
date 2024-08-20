#ifndef CATALOGO_HPP
#define CATALOGO_HPP

#include "produtos.hpp"
#include "eletrodomesticos.hpp"
#include "moveis.hpp"
#include "decoracao.hpp"
#include "desconto.hpp"
#include "telefone.hpp"
#include "livro.hpp"
#include "calcado.hpp"
#include "disco.hpp"
#include "artigo_esportivo.hpp"


class catalogo
{

private:

    std::vector<PRODUTO*> produtos;

    std::vector<PRODUTO*> vetor_descontos;
    std::vector<eletrodomestico*> vetor_eletrodomesticos;
    std::vector<movel*> vetor_moveis;         
    std::vector<decoracao*> vetor_decoracao;
    std::vector<telefone*>vetor_telefones;
    std::vector<livro*>vetor_livros;
    std::vector<calcado*>vetor_calcado;
    std::vector<disco*>vetor_disco;
    std::vector<artigo_esportivo*>vetor_artEsportivo;

public:

    
    bool verificar_senha(std::string senha);

       
    void adicionar_produto(const std::string& nome, int tipo, int faixa_preco, int estoque, int desconto);

    
    void ler_arquivo();

    
    void organizar_vetores();

    
    void imprimir_produto_sem_desconto(int tipo, int preco);

    
    void imprimir_produto_com_desconto();

    
    void liberar_memoria();


    ~catalogo();
};


#endif