#ifndef GARRAFADEREFRIGERANTE
#define GARRAFADEREFRIGERANTE

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class GarrafaDeRefrigerante : public ArmaAtaque
{
public:
    GarrafaDeRefrigerante(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif