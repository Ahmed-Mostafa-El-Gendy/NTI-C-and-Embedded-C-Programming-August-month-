/*
 ******************************************************************************
 * @file           : Lab3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : know the number is odd or even .
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int number ;
	printf("please enter the number = ");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("this number is even \n");
	}
	else 
	{
	printf("this number is odd \n ");	
	}
	printf("thank you ");
}