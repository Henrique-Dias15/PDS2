#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Balde.hpp"

Balde::Balde(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Balde::getDescricaoArma()
{
    return this->descricaoArma;
}

int Balde::getResistencia()
{
    return this->resistencia;
}
