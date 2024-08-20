#include "eletrodomesticos.hpp"


eletrodomestico::eletrodomestico(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto) : 
        PRODUTO(m_nome, m_tipo, m_preco, m_estoque, m_desconto){}

eletrodomestico::eletrodomestico(): PRODUTO("",0,0,0,0){}

eletrodomestico::~eletrodomestico(){}

void eletrodomestico::printInfo()
{
        std::cout<<"Nome: "<<getNome()<<std::endl;
        std::cout<<"Tipo: "<<getTipo()<<std::endl;
        std::cout<<"Faixa de preco: "<<getPreco()<<std::endl;
        std::cout<<"Estoque: "<<getEstoque()<<std::endl;
        std::cout<<"Desconto: "<<getDesconto()<<std::endl;
}