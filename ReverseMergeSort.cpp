//
// Created by Jack Butler on 5/3/2018.
//

#include <iostream>
using namespace std;

class ReverseMergeSort {

public:

    /**
     * This function accepts two reverse sorted arrays A and B, and their lengths as argument
     * It returns their merged reverse sorted array
     * Remember that to return an array, it must be dynamically allocated.
     * Dynamic allocation of array: int *array = new int[len]
     */
    int *mergeTwoReverseSortedArrays(int *A, int *B, int lenA, int lenB) { // complete this method
    }

    /**
     * This function performs a reverse merge sort an array by using recursion.
     * To pass an array from L to R index (both inclusive) into a function,
     * you can pass a pointer to the left index, i.e., &A[L] and the length R - L + 1
     */
    void reverseMergeSort(int *array, int left, int right) { // complete this method
    }

    void printArray(int *array, int length) {
        cout << "[";
        for (int i = 0; i < length - 1; i++)
            cout << array[i] << ", ";
        cout << array[length - 1] << "]";
    }
};

int main() {
    int A[] = { 19, 1, 12, 100, 7, 8, 4, -10, 88, 100, 349, 0, 7, -10 };
    int len = sizeof(A) / sizeof(int);
    cout << "Original Array: ";
    ReverseMergeSort rms;
    rms.printArray(A, len);
    rms.reverseMergeSort(A, 0, len - 1);
    cout << "\nReverse Sorted: ";
    rms.printArray(A, len);

    return 0;
}
