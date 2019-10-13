#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
}

void RestauranteCaseiro::adicionaAoPedido(int qtd, Pedido meupedido){
   mesa[qtd].adicionaAoPedido(meupedido);//Recebe a qtd da main e adiciona um pedido relacionado a Mesa
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total=0;
    for(int cont=0;cont<10;cont++){
        total = total + mesa[cont].calculaTotal();
    }
    return total;
}
