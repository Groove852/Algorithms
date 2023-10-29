#include <iostream>
#include "include/GraphAdapt.h"

int main() {
    GraphAdapt graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    graph.print();
    return 0;
}
