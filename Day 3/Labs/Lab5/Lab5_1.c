/*
 ******************************************************************************
 * @file           : Lab5_1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to find factorial of a number using while loop.
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main ()
 {
	 int number ;
	 unsigned int i = 1 , fact = 1 ; ; 
	 printf("piease enter the number :");
     scanf("%d",&number);
     while (number >= i )
	 {
		 fact = fact * i ;
		 i++ ; 
		 
	 }
	 printf("the result = %d \n",fact );
	 printf("thank you ");
 }