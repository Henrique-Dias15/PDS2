#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Tambor.hpp"

Tambor::Tambor(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Tambor::getDescricaoArma()
{
    return this->descricaoArma;
}

int Tambor::getResistencia()
{
    return this->resistencia;
}
