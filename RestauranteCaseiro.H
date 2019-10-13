#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "Pedido.h"
#include "MesaDeRestaurante.h"
class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int qtd, Pedido meupedido);
        double calculaTotalRestaurante();

    protected:

    private:
        MesaDeRestaurante mesa[10];
};

#endif // RESTAURANTECASEIRO_H
