#pragma once
#include <string>
using namespace std;

class Algos
{
private:
	int findMidPoint(int min, int max); // binary search
	void swap(int& n1, int& n2); // bubble sort and selection sort
	void swapChars(char& n1, char& n2);
	void swapStrings(string& n1, string& n2);

public:
	int linearSearch(int key, int *myNums, int sizeOfArray);
	int binarySearch(int key, int* myNums, int min, int max);
	void bubbleSort(int* A, int n);
	//void bubbleSortChars(char* A, int n);
	//void bubbleSortStrings(string* A, int n);
	void selectionSort(int* A, int n);
	void selectionSortPointer(int* A, int n);
};