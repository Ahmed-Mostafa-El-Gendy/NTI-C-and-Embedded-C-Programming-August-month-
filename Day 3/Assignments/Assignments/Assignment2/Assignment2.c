/*
 ******************************************************************************
 * @file           : Assignment2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to palindrome number .
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include <stdio.h>
int main() {
 int number, n1, rev = 0, rem;
 printf("Enter any number: \n");
 scanf("%d", &number);
 n1 = number;
 while (number > 0){
 rem = number % 10;
 rev = rev * 10 + rem;
 number = number / 10;
 }
 if (n1 == rev){
 printf("number is a palindromic number");
 }
 else{
 printf("number is not a palindromic number");
 }
 return 0;
}