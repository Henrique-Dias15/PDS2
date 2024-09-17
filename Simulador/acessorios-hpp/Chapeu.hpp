#ifndef CHAPEU
#define CHAPEU

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Chapeu : public ArmaDefesa
{
public:
    Chapeu(string descricaoArma, int resistencia);
    string getDescricaoArma() override;
    int getResistencia() override;
};

#endif