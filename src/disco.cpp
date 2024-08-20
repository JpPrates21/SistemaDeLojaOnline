#include "disco.hpp"



disco::disco(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto) : 
        PRODUTO(m_nome, m_tipo, m_preco, m_estoque, m_desconto){}

disco::disco() : PRODUTO("",0,0,0,0){}

disco::~disco(){}

void disco::printInfo()
{
        std::cout<<"Nome: "<<getNome()<<std::endl;
        std::cout<<"Tipo: "<<getTipo()<<std::endl;
        std::cout<<"Faixa de preco: "<<getPreco()<<std::endl;
        std::cout<<"Estoque: "<<getEstoque()<<std::endl;
        std::cout<<"Desconto: "<<getDesconto()<<std::endl;
}