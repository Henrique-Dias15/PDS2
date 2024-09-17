#ifndef MARTELO
#define MARTELO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Martelo : public ArmaAtaque
{
public:
    Martelo(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif