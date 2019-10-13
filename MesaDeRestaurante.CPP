#include "MesaDeRestaurante.h"
#include "Pedido.h"
MesaDeRestaurante::MesaDeRestaurante()
{
    qtd=0;
}

int MesaDeRestaurante::adicionaAoPedido(Pedido pedidonamesa){
    int cont;
    for(cont=0;cont<qtd;cont++){
        if(pedidonamesa.getDescricao() == pedidos[cont].getDescricao()){//Verifica se um pedido ja existe, caso ja exista aumenta
            pedidos[cont].setQuantidade(pedidos[cont].getQuantidade()+1);//a quantidade de pedidos
            return 0;
        }
    }

    pedidos[qtd] = pedidonamesa;
    qtd++;
    return qtd;
}

void MesaDeRestaurante::zeraPedidos(){
    int cont;
    for(cont=0;cont<qtd;cont++){
    pedidos[cont].setQuantidade(0);
    }
    qtd = 0;
}
double MesaDeRestaurante::calculaTotal(){
    int cont;
    double produto,total=0;
    for(cont=0;cont<qtd;cont++){
    produto = pedidos[cont].getPreco()*pedidos[cont].getQuantidade();
    total = total + produto;
    }
    return total;
}

