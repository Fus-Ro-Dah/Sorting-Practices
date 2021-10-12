// InsertionSOrt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "InsertionSort.h"

void InsertionSort(size_t a[], size_t size);


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
    InsertionSort(a, 5);
    for (size_t i = 0; i < 5; i++) {
        std::cout << a[i] << std::endl;
    }
    
}

void InsertionSort(size_t a[], size_t size) {
    for (size_t i = 1; i < size; i++) {
        for (size_t j = i; j > 0 && a[j] < a[j - 1]; j--) {
            std::swap(a[j], a[j - 1]);
        }
    }
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
