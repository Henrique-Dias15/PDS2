#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/TacaDeAgua.hpp"

TacaDeAgua::TacaDeAgua(string descricaoArma, int minForca, int maxForca)
    : ArmaAtaque(descricaoArma, minForca, maxForca)
{
}

int TacaDeAgua::gerarForcaAtaque()
{
    return maxForca;
}

string TacaDeAgua::gerarRuidoAtaque()
{
    return "Splash";
}
