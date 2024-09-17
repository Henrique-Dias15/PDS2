#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/BolaQuadrada.hpp"

BolaQuadrada::BolaQuadrada(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int BolaQuadrada::gerarForcaAtaque()
{
    return maxForca;
}

string BolaQuadrada::gerarRuidoAtaque()
{
    return "Boing Boing";
}
