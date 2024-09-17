#ifndef PNEU
#define PNEU

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class Pneu : public ArmaAtaque
{
public:
    Pneu(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif