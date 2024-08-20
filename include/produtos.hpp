#ifndef PRODUTOS_HPP
#define PRODUTOS_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

class PRODUTO 
{
    public:

        PRODUTO(std::string m_nome, int m_tipo, int m_preco, int m_estoque, int m_desconto);

        ~PRODUTO();

        std::string getNome(){return nome;}

        int getTipo(){return tipo;}

        int getPreco(){return faixa_preco;}

        int getEstoque(){return estoque;}

        int getDesconto(){return desconto;}

    private:

        std::string nome;
        int tipo = 0; // 1=eletrodomesticos, 2=movel, 3=decoracao, 4=telefone
        int faixa_preco = 0;
        int estoque = 0;
        int desconto = 0; // 1=Sim, 0=Nao


};


#endif 