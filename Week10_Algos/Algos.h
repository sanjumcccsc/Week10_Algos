#pragma once
class Algos
{
private:
	int findMidPoint(int min, int max);
	void swap(int& n1, int& n2);

public:
	int linearSearch(int key, int *myNums, int sizeOfArray);
	int binarySearch(int key, int* myNums, int min, int max);
	void bubbleSort(int* A, int n);
};