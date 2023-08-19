/*
============================================================================
Name        : task5.c
Author      : Ahmed-Mostafa-El-Gendy
Version     : 18 / August / 2023
Copyright   : Write C Program to find length of a given string using pointer.
============================================================================
*/
#include <stdio.h>
int StringLength(const char *str);
int main() {
    const char *str = "Hello, world!";
    int length = StringLength(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}
int StringLength(const char *str) {
    const char *ptr = str; 
    while (*ptr != '\0') {
        ptr++; 
    }
    return ptr - str; 
}