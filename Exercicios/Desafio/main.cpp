#include <iostream>
#include "Grafo.hpp"

int main()
{
    Grafo g(5);

    int arestas[7][2] = {
        {0, 1},
        {0, 4},
        {1, 2},
        {1, 3},
        {1, 4},
        {2, 3},
        {3, 4}};

    for (int i = 0; i < 7; i++)
    {
        g.adicionarAresta(arestas[i][0], arestas[i][1]);
    }

    std::cout << "Os vértices 1 e 2 são adjacentes?: " << (g.saoAdjacentes(1, 2) ? "Sim" : "Não") << std::endl;

    std::cout << "Vizinhos do vértice 1: ";
    for (int i : g.obterVizinhos(1))
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}