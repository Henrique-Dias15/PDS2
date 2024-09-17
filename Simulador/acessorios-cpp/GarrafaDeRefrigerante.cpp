#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/GarrafaDeRefrigerante.hpp"

GarrafaDeRefrigerante::GarrafaDeRefrigerante(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int GarrafaDeRefrigerante::gerarForcaAtaque()
{
    return maxForca;
}

string GarrafaDeRefrigerante::gerarRuidoAtaque()
{
    return "Ploft";
}
