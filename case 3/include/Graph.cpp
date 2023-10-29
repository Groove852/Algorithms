//
// Created by nequamy on 29.10.2023.
//

#include "Graph.h"
#include <iostream>

Graph::Graph(int size)
{
    this->size = size;
    this->adj_matrix = new double*[size];
    for(int i = 0; i < size; i++)
        this->adj_matrix[i] = new double[size];
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
        {
            if(i == j)
                adj_matrix[i][j] = 0.0;
            else
                adj_matrix[i][j] = 0.0;
        }
}

// destructing internal structures
Graph::~Graph(void)
{
    for(int i = 0; i < size; i++)
        delete[] adj_matrix[i];
    delete[] adj_matrix;
}

// returns number of vertices
inline int Graph::V() const
{
    return this->size;
}

// returns number of edges
int Graph::E()
{
    int count = 0;

    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++)
            if(adj_matrix[i][j] > -1.0)
                count++;
    return count;
}

// adding an edge between x and y with distance value
void Graph::add(int x, int y, double value)
{
    if(x == y)
        return;
    adj_matrix[x][y] = value;
    adj_matrix[y][x] = value;
}

// removing edge from x to y
void Graph::remove(int x, int y)
{
    if(x == y)
        return;
    adj_matrix[x][y] = -1;
    adj_matrix[y][x] = -1;
}

void Graph::print() {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            std::cout << adj_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

