#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "Funcionario.hpp"

class Estagiario : public Funcionario
{
public:
    Estagiario(std::string nome, int id, double salarioBase);
    double calcularSalarioTotal() override;
};

#endif