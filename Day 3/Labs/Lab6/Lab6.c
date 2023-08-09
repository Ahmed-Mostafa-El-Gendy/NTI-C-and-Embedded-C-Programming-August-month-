/*
 ******************************************************************************
 * @file           : Lab6.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to find the number of digits.
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main ()
 {
	 int number , digits = 0;
	 printf("please enter the number :");
	 scanf("%d",&number );
	 while(number !=0)
	 {
		 digits++;
		 number=number/10 ;
	 } 
	 printf("the number of digits = %d",digits );
 }