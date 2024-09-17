#include "../personagens-hpp/SeuMadruga.hpp"

SeuMadruga::SeuMadruga(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int SeuMadruga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int SeuMadruga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string SeuMadruga::pegarDescricao()
{
    return "So nao te dou outra por que...";
}
