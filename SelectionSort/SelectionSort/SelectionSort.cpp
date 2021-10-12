// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SelectionSort.h"

void SelectionSort(size_t a[], size_t size);
size_t findMinIndex(size_t a[], size_t start, size_t size);


int main()
{
    std::cout << "Hello World!\n";
    size_t* a;
    a = new size_t[5];
    a[0] = 5;
    a[1] = 9;
    a[2] = 66;
    a[3] = 6;
    a[4] = 1;
    SelectionSort(a, 5);
    std::cout << a[0] << std::endl;
}

void SelectionSort(size_t a[], size_t size) {
    for (size_t i = 0; i < size - 1; i++) {
        std::swap(a[i], a[findMinIndex(a, i, size)]);
    }
}

size_t findMinIndex(size_t a[], size_t start, size_t size) {
    size_t minIndex = start;
    size_t minItem = a[start];
    for (size_t i = start + 1; i < size; i++) {
        if (a[i] < minItem) {
            minIndex = i;
            minItem = a[i];
        }
    }
    return minIndex;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
