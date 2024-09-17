#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(std::string nome, int id, double salarioBase) : Funcionario(nome, id, salarioBase) {}

double FuncionarioRegular::calcularSalarioTotal()
{
    return salarioBase;
}