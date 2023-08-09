/*
 ******************************************************************************
 * @file           : Lab2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use for loop to print numbers form 1 to 10 and git the sum and avrage .
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
#include <stdio.h>

void main()
{       
    int i,number,sum=0;
	float avg;
	
	printf("Enter the 10 numbers\n");
	for (i=0;i<10;i++)
	{
		printf("Number=%d :",i);
		scanf("%d",&number);
		sum =sum + number;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\n The Average is      : %0.3f\n",sum,avg);
}