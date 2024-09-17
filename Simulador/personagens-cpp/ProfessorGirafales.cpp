#include "../personagens-hpp/ProfessorGirafales.hpp"

ProfessorGirafales::ProfessorGirafales(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa)
    : Personagem(id, nome, vida, armaAtaque, armaDefesa)
{
}

int ProfessorGirafales::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int ProfessorGirafales::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string ProfessorGirafales::pegarDescricao()
{
    return "Sileeeencio, criança!";
}
