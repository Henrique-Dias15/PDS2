#ifndef FUNCIONARIOREGULAR_HPP
#define FUNCIONARIOREGULAR_HPP

#include "Funcionario.hpp"

class FuncionarioRegular : public Funcionario
{
public:
    FuncionarioRegular(std::string nome, int id, double salarioBase);
    double calcularSalarioTotal() override;
};

#endif