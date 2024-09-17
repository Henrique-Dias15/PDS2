#ifndef SEUMADRUGA
#define SEUMADRUGA
#include "../core-simulador-hpp/Personagem.hpp"

class SeuMadruga : public Personagem
{
public:
    SeuMadruga(int id, string nome, int vida, ArmaAtaque *armaAtaque, ArmaDefesa *armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};
#endif