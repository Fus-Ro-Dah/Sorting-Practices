// FibonacciNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <assert.h>
#include "FibonacciNum.h"


int FibonacciNum(int n);
int FibonacciNum(int n, char i);

int main()
{
    //std::cout << "Hello World!\n";
    std::cout << FibonacciNum(35);
    std::cout << FibonacciNum(35, 'i');
}


int FibonacciNum(int n) {
    assert(n > 0);
    if (n <= 2) {
        return 1;
    }
    return FibonacciNum(n - 1) + FibonacciNum(n - 2);
}

int FibonacciNum(int n, char i) {
    int ans = 1;
    int tmp1 = 0;
    int tmp2 = 1;
    for (int i = 0; i < n - 1; i++) {
        ans = tmp2 + tmp1;
        tmp1 = tmp2;
        tmp2 = ans;
    }
    return ans;
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
