#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>

int main()
{
    std::vector<Veiculo *> veiculos;

    veiculos.push_back(new Caminhao("MarcaCaminhao1", "ModeloCaminhao1", 10, 6));
    veiculos.push_back(new Van("MarcaVan1", "ModeloVan1", 3, 8));
    veiculos.push_back(new Caminhao("MarcaCaminhao2", "ModeloCaminhao2", 15, 8));
    veiculos.push_back(new Van("MarcaVan2", "ModeloVan2", 4, 10));

    for (Veiculo *veiculo : veiculos)
    {
        veiculo->exibirDados();
    }

    for (Veiculo *veiculo : veiculos)
    {
        delete veiculo;
    }

    return 0;
}