// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int BinarySearch(const size_t a[], const size_t size, const size_t key);


int main()
{
    size_t* a;
    a = new size_t[5];
    a[0] = 5;
    a[1] = 9;
    a[2] = 17;
    a[3] = 55;
    a[4] = 109;
    
    std::cout << BinarySearch(a, 5, 11) << std::endl;
}

int BinarySearch(const size_t a[], const size_t size, const size_t key) {
    int mid = 0, low = 0, high = int(size) - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            return mid;
        }
        else if (a[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;

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
