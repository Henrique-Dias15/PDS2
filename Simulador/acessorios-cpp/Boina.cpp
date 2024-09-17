#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Boina.hpp"

Boina::Boina(string descricaoArma, int resistencia)
    : ArmaDefesa(descricaoArma, resistencia)
{
}

string Boina::getDescricaoArma()
{
    return this->descricaoArma;
}

int Boina::getResistencia()
{
    return this->resistencia;
}
