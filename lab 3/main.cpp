#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "include/Sorter.h"

int Generate(int min, int max) {
    return min + rand() % (max - min + 1);
}

void MeasureTime(void (*sortAlgorithm)(std::vector<int>&), std::vector<int>& arr) {
    clock_t start, end;
    start = clock();
    sortAlgorithm(arr);
    end = clock();
    double timeTaken = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Turnaround time: " << timeTaken << " seconds" << std::endl;
}

int main() {
    srand(time(NULL));
    const int N = 10000;
    std::vector<int> arr(N);

    for (int i = 0; i < N; i++) {
        arr[i] = Generate(1, 1000);
    }

    std::cout << "Bubble Sort:" << std::endl;
    MeasureTime(Sorter::bubbleSort, arr);

    std::cout << "Insertion Sort:" << std::endl;
    MeasureTime(Sorter::insertionSort, arr);

    std::cout << "Selection Sort:" << std::endl;
    MeasureTime(Sorter::selectionSort, arr);

    std::cout << "Shell Sort:" << std::endl;
    MeasureTime(Sorter::shellSort, arr);

    std::cout << "Insertion Sort With Sentinel:" << std::endl;
    MeasureTime(Sorter::insertionSortWithSentinel, arr);

    std::cout << "Cocktail Shaker Sort:" << std::endl;
    MeasureTime(Sorter::cocktailShakerSort, arr);

    return 0;
}