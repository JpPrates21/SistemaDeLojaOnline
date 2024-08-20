#ifndef ARTIGO_ESPORTIVO_HPP
#define ARTIGO_ESPORTIVO_HPP

#include "produtos.hpp"

class artigo_esportivo : public PRODUTO
{

    public:

        //CONSTRUTOR PARAMETRIZADO
        artigo_esportivo(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        //CONSTRUTOR TEMP/DEFAULT
        artigo_esportivo();

        //DESTRUTOR DEFAULT
        ~artigo_esportivo();

        //MENSAGEM DE IDENTIFICAÇÃO
        void printInfo();
};

#endif