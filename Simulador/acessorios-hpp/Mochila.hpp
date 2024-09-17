#ifndef MOCHILA
#define MOCHILA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Mochila : public ArmaDefesa
{
public:
    Mochila(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif