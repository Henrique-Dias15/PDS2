#ifndef TAMBOR
#define TAMBOR

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Tambor : public ArmaDefesa
{
public:
    Tambor(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif