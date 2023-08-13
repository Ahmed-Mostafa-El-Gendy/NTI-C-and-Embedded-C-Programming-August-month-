/*
 ******************************************************************************
 * @file           : task4.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use number of string.
 * @date           : 11 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>

int main() {
    char str[50];
    int i;
    printf("Please enter a word: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) { }
    printf("Length of the string: %d\n", i);

    return 0;
}