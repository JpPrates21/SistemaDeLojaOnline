#ifndef DECORACAO_HPP
#define DECORACAO_HPP

#include "produtos.hpp"

class decoracao : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        decoracao(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        decoracao();

        //DESTRUTOR DEFAULT
        ~decoracao();
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();
};

#endif