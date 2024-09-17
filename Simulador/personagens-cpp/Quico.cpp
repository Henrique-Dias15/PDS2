#include "../personagens-hpp/Quico.hpp"

Quico::Quico(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int Quico::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Quico::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Quico::pegarDescricao()
{
    return "Gentalha, gentalha!";
}
