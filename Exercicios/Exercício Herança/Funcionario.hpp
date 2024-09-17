#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario
{
protected:
    std::string nome;
    int id;
    double salarioBase;

public:
    Funcionario(std::string nome, int id, double salarioBase);
    virtual double calcularSalarioTotal() = 0; // Método virtual puro
};

#endif