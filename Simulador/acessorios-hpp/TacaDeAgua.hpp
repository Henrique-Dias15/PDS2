#ifndef TACADEAGUA
#define TACADEAGUA

#include "../core-simulador-hpp/ArmaAtaque.hpp"

class TacaDeAgua : public ArmaAtaque
{
public:
    TacaDeAgua(string descricaoArma, int minForca, int maxForca);
    int gerarForcaAtaque() override;
    string gerarRuidoAtaque() override;
};

#endif