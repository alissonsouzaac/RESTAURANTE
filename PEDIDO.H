#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>



class Pedido
{
    public:
        Pedido();
        int getNumero();
        int getQuantidade();
        double getPreco();
        std::string getDescricao();
        void setDescricao(std::string minhadesc);
        void setQuantidade(int qtd);
        void setNumero(int num);
        void setPreco(double valor);
    private:
        int numero, quantidade;
        std::string descricao;
        double preco;
};

#endif // PEDIDO_H
