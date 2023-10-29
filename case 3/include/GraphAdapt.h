//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_GRAPHADAPT_H
#define ALGORITHMS_GRAPHADAPT_H

#include <vector>
#include <utility>

class GraphAdapt
{
public:
    GraphAdapt(int size);
    ~GraphAdapt();

    int V() const;
    int E();

    void addEdge(int x, int y);
    void removeEdge(int x, int y);

    void print();

private:
    int size;
    std::vector<std::pair<int, int>> edges;
};

#endif //ALGORITHMS_GRAPHADAPT_H
