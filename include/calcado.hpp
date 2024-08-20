#ifndef CALCADO_HPP
#define CALCADO_HPP

#include "produtos.hpp"

class calcado : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        calcado(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT      
        calcado();

        //DESTRUTOR DEFAULT
        ~calcado();

        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();
};

#endif