#include <iostream>
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"

int main()
{
    FuncionarioRegular fr("Funcionario Regular", 1, 1000);
    Gerente g("Gerente", 2, 1000, 500);
    Estagiario e("Estagiario", 3, 1000);

    std::cout << "Salario total do Funcionario Regular: " << fr.calcularSalarioTotal() << std::endl;
    std::cout << "Salario total do Gerente: " << g.calcularSalarioTotal() << std::endl;
    std::cout << "Salario total do Estagiario: " << e.calcularSalarioTotal() << std::endl;

    return 0;
}