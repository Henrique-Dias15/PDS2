#include "Gerente.hpp"

Gerente::Gerente(std::string nome, int id, double salarioBase, double bonusAnual)
    : Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual) {}

double Gerente::calcularSalarioTotal()
{
    return salarioBase + bonusAnual;
}