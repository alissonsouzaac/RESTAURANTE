#include "Pedido.h"

Pedido::Pedido()
{

}
int Pedido::getNumero(){
    return numero;
}
int Pedido::getQuantidade(){
    return quantidade;
}
double Pedido::getPreco(){
    return preco;
}
std::string Pedido::getDescricao(){
    return descricao;
}
void Pedido::setNumero(int num){
    numero = num;
}
void Pedido::setQuantidade(int qtd){
    quantidade = qtd;
}
void Pedido::setPreco(double valor){
    preco = valor;
}
void Pedido::setDescricao(std::string minhadesc){
    descricao = minhadesc;
}
