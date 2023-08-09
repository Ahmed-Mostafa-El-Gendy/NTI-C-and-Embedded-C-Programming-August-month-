/*
 ******************************************************************************
 * @file           : Lab5_2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to find factorial of a number using for loop.
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main ()
 {
	 int number ;
	 unsigned int i = 1 , fact = 1;
	 printf("please enter the number ");
	 scanf("%d",&number);
	 for (i=1;i<=number;i++)
	 {
		 fact = fact * i;
	 }
	 printf("the number = %d \n",fact);
	 printf("thank you ");
 }
 