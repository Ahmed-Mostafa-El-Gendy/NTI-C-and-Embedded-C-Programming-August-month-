/*
============================================================================
Name        : task2.c
Author      : Ahmed-Mostafa-El-Gendy
Version     : 18 / August / 2023
Copyright   : Write a C program to print the number that is repeated and print
times of repeated using pointers.
============================================================================
*/
#include <stdio.h>
void FindMostFrequent(int *arr, int size, int *mostFrequentNum, int *count);
int main() {
    int array[10] = {1, 5, 5, 4, 4, 4, 1, 4, 3, 2};
    int mostFrequentNum, count;
    
    FindMostFrequent(array, 10, &mostFrequentNum, &count);
    
    printf("The most frequent number is: %d\n", mostFrequentNum);
    printf("The count of the most frequent number is: %d\n", count);

    return 0;
}

void FindMostFrequent(int *arr, int size, int *mostFrequentNum, int *count) {
    int freqMap[100] = {0}; 
    int maxFreq = 0;

    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++; 
		
        if (freqMap[arr[i]] > maxFreq) {
            maxFreq = freqMap[arr[i]]; 
            *mostFrequentNum = arr[i]; 
        }
    }

    *count = maxFreq;
}