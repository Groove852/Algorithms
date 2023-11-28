#ifndef SORTER_H
#define SORTER_H

#include <iostream>
#include <vector>

class Sorter {
public:
    static void bubbleSort(std::vector<int>& arr);
    static void insertionSort(std::vector<int>& arr);
    static void selectionSort(std::vector<int>& arr);
    static void shellSort(std::vector<int>& arr);
    static void insertionSortWithSentinel(std::vector<int>& arr);
    static void cocktailShakerSort(std::vector<int>& arr);

private:
    static void swap(int& a, int& b);
};

#endif // SORTER_H
