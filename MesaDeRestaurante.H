#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        int adicionaAoPedido(Pedido pedidonamesa);
        void zeraPedidos();
        double calculaTotal();

    private:
        Pedido pedidos[10];
        int qtd;
};

#endif // MESADERESTAURANTE_H
