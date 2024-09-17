#ifndef GRAFO
#define GRAFO

#include <vector>
#include <list>

class Grafo
{
public:
    Grafo(int V);
    void adicionarAresta(int v, int w);
    bool saoAdjacentes(int v, int w);
    std::list<int> obterVizinhos(int v);

private:
    int V;                           // Número de vértices
    std::vector<std::list<int>> adj; // Lista de adjacência
};

#endif