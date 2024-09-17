#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pneu.hpp"

Pneu::Pneu(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int Pneu::gerarForcaAtaque()
{
    return maxForca;
}

string Pneu::gerarRuidoAtaque()
{
    return "Puff Puff";
}
