#ifndef LIVROS_HPP
#define LIVROS_HPP

#include "produtos.hpp"

class livro : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        livro(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        livro();

        //DESTRUTOR DEFAULT
        ~livro();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();


};

#endif