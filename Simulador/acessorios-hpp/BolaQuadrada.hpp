#ifndef BOLAQUADRADA
#define BOLAQUADRADA

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class BolaQuadrada : public ArmaAtaque
{
public:
    BolaQuadrada(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif