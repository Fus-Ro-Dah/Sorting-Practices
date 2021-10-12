// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Partition(int nums[], int lowIndex, int highIndex);
void QuickSort(int nums[], int lowIndex, int highIndex);

int main()
{
    int* a;
    a = new int[5];
    a[0] = 5;
    a[1] = 9;
    a[2] = 66;
    a[3] = 6;
    a[4] = 1;
    QuickSort(a, 0, 4);
    std::cout << a[0] << std::endl;
}


int Partition(int nums[], int lowIndex, int highIndex) {
    int mid = lowIndex + (highIndex - lowIndex) / 2;
    int pivot = nums[mid];
    bool done = false;

    while (!done) {
        while (nums[lowIndex] < pivot) {
            lowIndex++;
        }

        while (nums[highIndex] > pivot) {
            highIndex--;
        }
        if (lowIndex >= highIndex) {
            done = true;
        }
        else {
            std::swap(nums[lowIndex], nums[highIndex]);
            lowIndex++;
            highIndex--;
        }
    }
    return highIndex;
}
void QuickSort(int nums[], int lowIndex, int highIndex) {
    if (lowIndex >= highIndex) {
        return;
    }
    int lowEndIndex = Partition(nums, lowIndex, highIndex);
    QuickSort(nums, lowIndex, lowEndIndex);
    QuickSort(nums, lowEndIndex + 1, highIndex);
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
