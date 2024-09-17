#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario
{
private:
    double bonusAnual;

public:
    Gerente(std::string nome, int id, double salarioBase, double bonusAnual);
    double calcularSalarioTotal() override;
};

#endif