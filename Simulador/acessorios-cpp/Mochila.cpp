#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Mochila.hpp"

Mochila::Mochila(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Mochila::getDescricaoArma()
{
    return this->descricaoArma;
}

int Mochila::getResistencia()
{
    return this->resistencia;
}
