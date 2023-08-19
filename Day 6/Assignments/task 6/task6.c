/*
============================================================================
Name        : task6.c
Author      : Ahmed-Mostafa-El-Gendy
Version     : 18 / August / 2023
Copyright   : Write a C Program to find reverse of a string using pointers.
============================================================================
*/
#include <stdio.h>

void StringReverse(char *str);

int main() {
    char str[] = "Hello, world!";
    
    printf("Original string: %s\n", str);
    
    StringReverse(str);
    
    printf("Reversed string: %s\n", str);

    return 0;
}
void StringReverse(char *str) {
    char *start = str; 
    char *end = str; 
    char temp;
    while (*end != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}