//
// Created by nequamy on 29.10.2023.
//
#include "GraphAdapt.h"
#include <iostream>
#include <vector>
#include <utility>

GraphAdapt::GraphAdapt(int size)
{
    this->size = size;
}

GraphAdapt::~GraphAdapt()
{
}

int GraphAdapt::V() const
{
    return this->size;
}

int GraphAdapt::E()
{
    return edges.size();
}

void GraphAdapt::addEdge(int x, int y)
{
    edges.push_back(std::make_pair(x, y));
}

void GraphAdapt::removeEdge(int x, int y)
{
    for (auto it = edges.begin(); it != edges.end(); ++it)
    {
        if ((it->first == x && it->second == y) || (it->first == y && it->second == x))
        {
            edges.erase(it);
            break;
        }
    }
}

void GraphAdapt::print()
{
    for (const auto& edge : edges)
    {
        std::cout << edge.first << " " << edge.second << std::endl;
    }
}