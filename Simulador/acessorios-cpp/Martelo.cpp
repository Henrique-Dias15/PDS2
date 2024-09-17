#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Martelo.hpp"

Martelo::Martelo(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int Martelo::gerarForcaAtaque()
{
    return maxForca;
}

string Martelo::gerarRuidoAtaque()
{
    return "Bam Bam";
}
