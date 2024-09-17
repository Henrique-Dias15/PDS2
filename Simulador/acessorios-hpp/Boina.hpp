#ifndef BOINA
#define BOINA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Boina : public ArmaDefesa
{
public:
    Boina(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif