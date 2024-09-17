#ifndef PROFESSORGIRAFALES
#define PROFESSORGIRAFALES
#include "../core-simulador-hpp/Personagem.hpp"

class ProfessorGirafales : public Personagem
{
public:
    ProfessorGirafales(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};
#endif