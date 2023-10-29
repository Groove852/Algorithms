//
// Created by nequamy on 29.10.2023.
//

#ifndef ALGORITHMS_GRAPH_H
#define ALGORITHMS_GRAPH_H

class Graph
{
private:
    double** adj_matrix;
    int size;
public:
    Graph(int size);
    ~Graph(void);
    int V() const;
    int E();
    void add(int x, int y, double value);
    void remove(int x, int y);
    void print();
};

#endif //ALGORITHMS_GRAPH_H
