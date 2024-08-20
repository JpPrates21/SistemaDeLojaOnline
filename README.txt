LOJA VIRTUAL🛒

A ideia principal do projeto é desenvolver uma loja virtual que pode ser facilmente manipulada,
o catálogo dos itens será feito por meio da leitura de um arquivo txt, nele conterá o nome do
produto, a faixa de preço, o tipo de produto, a quantidade de produtos disponível no estoque 
e se eles estão ou não com desconto. O usuário poderá escolher a faixa de preço dos produtos 
e filtra-los por tipo (eletrodoméstico, moveis, decoração, etc...). 

Na prática, todos os produtos disponíveis são objetos de classes derivadas de uma classe primitiva
comum (PRODUTO), assim facilitando que funções que dependam da filtragem sejam implementadas. Além disso,
todos os objetos são alocados dinamicamente.

As categorias são: eletrodoméstico[1],moveis[2],decoração[3],telefones[4],livros[5],calcados[6],disco[7],artigo esportivo[8]
As faixas de preço são: [1-200],[201-400],[401-600],[601-800+].

os objetos devem ser listados como:
nome, categoria[1-3], faixa de preço[1-4], quantidade no estoque, está com desconto?[0-1]

para as estruturas de iteração funcionarem devem ser espaçados por um " " apenas e uma quebra de linha por item