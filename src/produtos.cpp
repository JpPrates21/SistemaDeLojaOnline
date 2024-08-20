#include "produtos.hpp"

PRODUTO::PRODUTO(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto) :
    nome(m_nome), tipo(m_tipo), faixa_preco(m_preco), estoque(m_estoque), desconto(m_desconto){}

PRODUTO::~PRODUTO(){}
