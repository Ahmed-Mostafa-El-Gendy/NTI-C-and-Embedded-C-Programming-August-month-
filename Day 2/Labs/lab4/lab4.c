/*
 ******************************************************************************
 * @file           : Lab4.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a code that will ask the user to enter 3 numbers, the program will
                     print the maximum number of them.
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int number1 , number2 , number3 , max ;
	printf("please enter the numbers  \n ");
	printf("please enter the number1 = ");
	scanf("%d",&number1);
	printf("please enter the number2 = ");
	scanf("%d",&number2);
	printf("please enter the number3 = ");
	scanf("%d",&number3);
	max = number1 ; 
	if (number2>max)
	{
		max=number2 ;
	}
	if (number3>max) 
	{
		max=number3 ; 
	}		
	printf("the max number = %d \n ",max);
	printf("thank you ");
} 