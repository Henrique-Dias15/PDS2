#include "../personagens-hpp/DonaFlorinda.hpp"

DonaFlorinda::DonaFlorinda(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int DonaFlorinda::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int DonaFlorinda::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string DonaFlorinda::pegarDescricao()
{
    return "E da proxima vez, va lutar com sua avo!";
}
