#ifndef DISCO_HPP
#define DISCO_HPP

#include "produtos.hpp"

class disco : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        disco(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        disco();

        //DESTRUTOR DEFAULT
        ~disco();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();
};

#endif