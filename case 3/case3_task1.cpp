#include <iostream>
#include "include/Graph.h"

int main() {
    Graph graph(6);
    graph.add(0, 1, 1);
    graph.add(1, 4, 1);
    graph.add(2, 4, 1);
    graph.add(3, 4, 1);
    graph.add(4, 5, 1);

    graph.print();
    return 0;
}
