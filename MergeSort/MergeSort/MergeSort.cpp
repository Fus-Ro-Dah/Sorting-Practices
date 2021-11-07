// MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

void MergeSort(int arr[], int low, int high);
void Merge(int arr[], int i, int j, int k);

int main()
{
    int* a;
    a = new int[5];
    a[0] = 5;
    a[1] = 9;
    a[2] = 66;
    a[3] = 6;
    a[4] = 1;
    MergeSort(a, 0, 4);
    std::cout << a[0] << std::endl;
}

void Merge(int arr[], int low, int mid, int high) {
    int finalSize = high - low + 1;
    int* tmp;
    tmp = new int[finalSize];
    int left = low;
    int right = mid + 1;
    int mergeIndex = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            tmp[mergeIndex++] = arr[left++];
        }
        else {
            tmp[mergeIndex++] = arr[right++];
        }
    }

    while (left <= mid) {
        tmp[mergeIndex++] = arr[left++];

    }
    while (right <= high) {
        tmp[mergeIndex++] = arr[right++];
    }
    for (mergeIndex = 0; mergeIndex < finalSize; mergeIndex++) {
        arr[low + mergeIndex] = tmp[mergeIndex];
    }
    delete[] tmp;
    
}

void MergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
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
