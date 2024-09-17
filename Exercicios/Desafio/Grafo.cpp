#include "Grafo.hpp"

Grafo::Grafo(int V)
{
    this->V = V;
    adj.resize(V);
}

void Grafo::adicionarAresta(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Grafo::saoAdjacentes(int v, int w)
{
    for (int i : adj[v])
        if (i == w)
            return true;
    return false;
}

std::list<int> Grafo::obterVizinhos(int v)
{
    return adj[v];
}