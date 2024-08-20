#ifndef MOVEIS_HPP
#define MOVEIS_HPP

#include "produtos.hpp"

class movel : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        movel(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT      
        movel();

        //DESTRUTOR DEFAULT
        ~movel();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();

};

#endif