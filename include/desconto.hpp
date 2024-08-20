#ifndef DESCONTO_HPP
#define DESCONTO_HPP

#include "produtos.hpp"

class desconto : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        desconto(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        desconto();

        //DESTRUTOR DEFAULT
        ~desconto();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();
};

#endif