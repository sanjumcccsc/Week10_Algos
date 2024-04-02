#include "Algos.h"

int Algos::findMidPoint(int min, int max)
{
    return (min+max)/2;
}

void Algos::swap(int& n1, int& n2)
{
    int temp = -1;
    
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void Algos::swapChars(char& n1, char& n2)
{
    char temp = ' ';

    temp = n1;
    n1 = n2;
    n2 = temp;
}

void Algos::swapStrings(string& n1, string& n2)
{
    string temp = "";

    temp = n1;
    n1 = n2;
    n2 = temp;
}

int Algos::linearSearch(int key, int* myNums, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (myNums[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int Algos::binarySearch(int key, int* myNums, int min, int max)
{
    int midpoint = -1;

    if (max < min)
    {
        return -1;
    }
    else
    {
        midpoint = findMidPoint(min, max);
    }
    if (myNums[midpoint] < key)
    {
        binarySearch(key, myNums, midpoint + 1, max);
    }
    else if (myNums[midpoint] > key)
    {
        binarySearch(key, myNums, min, midpoint - 1);
    }
    else
    {
        return midpoint;
    }
}

void Algos::bubbleSort(int* A, int n)
{
    bool flag = false;
    for (int k = 1; k < n; k++)
    {
        flag = false;
        for (int i = 0; i < n - k; i++)
        {
            if (A[i] > A[i + 1])
            {
                swap(A[i], A[i + 1]);
                flag = true;
            }
        }
        if (!flag) // didn't do any swapping
        {
            break;
        }
    }
}

//void Algos::bubbleSortChars(char* A, int n)
//{
//    bool flag = false;
//    for (int k = 1; k < n; k++)
//    {
//        flag = false;
//        for (int i = 0; i < n - k; i++)
//        {
//            if (A[i] > A[i + 1])
//            {
//                swap(A[i], A[i + 1]);
//                flag = true;
//            }
//        }
//        if (!flag) // didn't do any swapping
//        {
//            break;
//        }
//    }
//}
//
//void Algos::bubbleSortStrings(string* A, int n)
//{
//    bool flag = false;
//    for (int k = 1; k < n; k++)
//    {
//        flag = false;
//        for (int i = 0; i < n - k; i++)
//        {
//            if (A[i] > A[i + 1])
//            {
//                swap(A[i], A[i + 1]);
//                flag = true;
//            }
//        }
//        if (!flag) // didn't do any swapping
//        {
//            break;
//        }
//    }
//}

void Algos::selectionSort(int* A, int n)
{
    int min = -1;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(A[min], A[i]);
        }
    }
}

void Algos::selectionSortPointer(int* A, int n)
{
    int min = -1;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (*(A+j) < *(A+min))
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(*(A+min), *(A+i));
        }
    }
}
