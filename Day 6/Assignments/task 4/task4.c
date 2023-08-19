/*
============================================================================
Name        : task4.c
Author      : Ahmed-Mostafa-El-Gendy
Version     : 18 / August / 2023
Copyright   : Write C program to print array after removing duplicates using
pointers.
============================================================================
*/
#include <stdio.h>

int* RemoveDuplicates(int *arr, int size, int *newSize);

int main() {
    int array[10] = {1, 2, 2, 3, 4, 2, 1, 0, 1, 2};
    int newSize;
    
    int *result = RemoveDuplicates(array, 10, &newSize);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}

int* RemoveDuplicates(int *arr, int size, int *newSize) {
    int *result = arr;
    *newSize = size; 
    
    for (int i = 0; i < *newSize; i++) {
        for (int j = i + 1; j < *newSize; j++) {
            if (arr[i] == arr[j]) {
            
                for (int k = j; k < *newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*newSize)--; 
            }
        }
    }
    
    return result;
}