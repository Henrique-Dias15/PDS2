#ifndef DONAFLORINHA
#define DONAFLORINHA
#include "../core-simulador-hpp/Personagem.hpp"

class DonaFlorinda : public Personagem
{
public:
    DonaFlorinda(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};
#endif