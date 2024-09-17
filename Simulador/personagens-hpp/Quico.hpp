#ifndef QUICO
#define QUICO
#include "../core-simulador-hpp/Personagem.hpp"

class Quico : public Personagem
{
public:
    Quico(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};
#endif