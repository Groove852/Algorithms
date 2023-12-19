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
    const int N = 10000000;
    std::vector<int> arr(N);


//    std::cout << "Bubble Sort:" << std::endl;
//    MeasureTime(Sorter::bubbleSort, arr);
//
//    std::cout << "Insertion Sort:" << std::endl;
//    MeasureTime(Sorter::insertionSort, arr);
//
//    std::cout << "Selection Sort:" << std::endl;
//    MeasureTime(Sorter::selectionSort, arr);
//
//    std::cout << "Insertion Sort With Sentinel:" << std::endl;
//    MeasureTime(Sorter::insertionSortWithSentinel, arr);
//
//    std::cout << "Cocktail Shaker Sort:" << std::endl;
//    MeasureTime(Sorter::cocktailShakerSort, arr);

    std::cout << "Shell Sort:" << std::endl;
    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < N; j++) {
            arr[j] = Generate(0,  32767);
        }
        MeasureTime(Sorter::shellSort, arr);
    }

    return 0;
}