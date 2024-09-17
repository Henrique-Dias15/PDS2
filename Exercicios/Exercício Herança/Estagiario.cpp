#include "Estagiario.hpp"

Estagiario::Estagiario(std::string nome, int id, double salarioBase) : Funcionario(nome, id, salarioBase) {}

double Estagiario::calcularSalarioTotal()
{
    return salarioBase * 0.8; // Supondo que o estagiário recebe 80% do salário base
}