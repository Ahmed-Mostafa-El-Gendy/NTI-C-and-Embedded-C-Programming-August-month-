/*
 ******************************************************************************
 * @file           : Lab3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use for loop to make multiplcation table from 1 to 10 .
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	for (int i = 1 ; i<=10 ; i++)
	{
		printf("the multiplcation table = %d \n",i);
		for (int j = 1 ; j <= 10 ; j++ )
		{
			printf("%d * %d = %d \n",i ,j , i*j);
			
		}//for 2
	}//for 1 
	printf("thank you");
} 