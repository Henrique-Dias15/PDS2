#ifndef BALDE
#define BALDE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Balde : public ArmaDefesa
{
public:
    Balde(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif