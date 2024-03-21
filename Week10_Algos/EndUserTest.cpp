#include "Algos.h"
#include <iostream>
using namespace std;

int main()
{
	Algos a;
	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int sortedNumbers[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int userNum = -1;
	int answer = -1;

	cout << "Enter number looking for: ";
	cin >> userNum;


	//answer = a.linearSearch(userNum, someNumbers, 10);
	//cout << userNum << " found at index " << answer << endl;

	/*answer = a.binarySearch(userNum, sortedNumbers, 0, 9);
	cout << userNum << " found at index " << answer << endl;*/

	cout << "Array before sorting: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << someNumbers[i] << " ";
	}
	cout << endl;

	a.bubbleSort(someNumbers, 10);

	cout << "Array after sorting: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << someNumbers[i] << " ";
	}
	cout << endl;
	return 0;
}