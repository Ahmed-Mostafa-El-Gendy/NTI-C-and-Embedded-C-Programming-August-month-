/*
============================================================================
Name        : task2.c
Author      : Ahmed-Mostafa-El-Gendy
Version     : 18 / August / 2023
Copyright   : Write C function to find 2 elements in the array such that difference
between them is Largest using pointers.
============================================================================
*/
#include <stdio.h>

void FindLargestDifference(int *arr, int size, int *maxDiffElem1, int *maxDiffElem2);

int main() {
    int array[10] = {1,2,0,4,5,3,6,7,10,11};
    int maxDiffElem1, maxDiffElem2;
    
    FindLargestDifference(array, 10, &maxDiffElem1, &maxDiffElem2);
    
    printf("The two elements with the largest difference are: %d and %d\n", maxDiffElem1, maxDiffElem2);

    return 0;
}

void FindLargestDifference(int *arr, int size, int *maxDiffElem1, int *maxDiffElem2) {
    if (size < 2) {
        // Handle the case where the array has less than 2 elements
        printf("Error: The array should have at least 2 elements.\n");
        return;
    }
    
    int maxDiff = arr[1] - arr[0]; // Initialize the maximum difference with the first two elements
    int i, j;
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            int diff = arr[j] - arr[i];
            if (diff > maxDiff) {
                maxDiff = diff;
                *maxDiffElem1 = arr[i];
                *maxDiffElem2 = arr[j];
            }
        }
    }
}