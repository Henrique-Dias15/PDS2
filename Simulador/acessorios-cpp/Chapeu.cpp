#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Chapeu.hpp"

Chapeu::Chapeu(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Chapeu::getDescricaoArma()
{
    return this->descricaoArma;
}

int Chapeu::getResistencia()
{
    return this->resistencia;
}
