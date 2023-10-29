#include <iostream>
#include "include/Graph.h"

int main() {
    Graph graph(6);
    graph.add(1, 2, 1);
    graph.add(2, 5, 1);
    graph.add(3, 5, 1);
    graph.add(4, 5, 1);
    graph.add(5, 6, 1);

    graph.print();
    return 0;
}
