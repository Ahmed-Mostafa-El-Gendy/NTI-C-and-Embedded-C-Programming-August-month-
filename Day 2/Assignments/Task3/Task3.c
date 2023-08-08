/*
 ******************************************************************************
 * @file           : Task2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a code that know the year is leap or not .
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main()
{
	int year ;
	printf("please enter the year : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("the %d is leap year \n",year);
	}
	else if (year%4!=0)
	{
		printf("the %d is not leap year \n",year);
	}
	printf("thank you ");
	
	
	
	
	
}