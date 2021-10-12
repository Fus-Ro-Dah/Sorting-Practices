// Hanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Hanoi(int numOfDisks, char poleA, char poleB, char poleC);

int main()
{
	Hanoi(10, 'A', 'B', 'C');
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

void Hanoi(int numOfDisks, char poleA, char poleB, char poleC) {
	//int count = 0;
	if (numOfDisks == 1) {
		std::cout << "move top disk from " << poleA << " to " << poleB << std::endl;
		//count++;
	}
	else {
		Hanoi(numOfDisks - 1, poleA, poleC, poleB);
		Hanoi(1, poleA, poleB, poleC);
		Hanoi(numOfDisks - 1, poleC, poleB, poleA);
	}
}
