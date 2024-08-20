#ifndef ELETRODOMESTICOS_HPP
#define ELETRODOMESTICOS_HPP

#include "produtos.hpp"

class eletrodomestico : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        eletrodomestico(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        eletrodomestico();

        //DESTRUTOR DEFAULT
        ~eletrodomestico();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();

};

#endif