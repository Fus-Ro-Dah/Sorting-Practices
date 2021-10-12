// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BubbleSort.h"

void BubbleSort(size_t a[], size_t size);


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
    BubbleSort(a, 5);
    std::cout << a[0] << std::endl;
}

void BubbleSort(size_t a[], size_t size) {
    bool sorted = false;
    for (size_t pass = 1; pass < size && !sorted; pass++) {
        sorted = true;
        for (size_t i = 0; i < size - pass; i++) {
            if (a[i] > a[i + 1]) {
                std::swap(a[i], a[i + 1]);
                sorted = false;
            }
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
