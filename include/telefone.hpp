#ifndef TELEFONE_HPP
#define TELEFONE_HPP

#include "produtos.hpp"

class telefone : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        telefone(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT      
        telefone();

        //DESTRUTOR DEFAULT
        ~telefone();        
        
        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();


};

#endif