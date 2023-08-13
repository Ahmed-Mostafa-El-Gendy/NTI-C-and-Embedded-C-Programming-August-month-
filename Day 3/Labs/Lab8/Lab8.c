/*
 ******************************************************************************
 * @file           : Lab8.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to git the prime number 
 * @date           : 10 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main()
{
	int first_number , end_number , i , swap  , flag = 0 , j ;
	
	printf("please enter the first_numbers : ");
	scanf("%d",&first_number);
	printf("please enter the end_numbers : ");
	scanf("%d",&end_number);
	if(first_number > end_number) // option if the user input hight number to low number .
	{
	 swap = first_number ;
     first_number = end_number ;
     end_number = swap ;	 
	}//if
	
	for(i=first_number ; i <=end_number; i++ )
	{
		flag = 0 ; //default number is prime .
		for (j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag = 1 ;//the number is not prime 
				break ;
			}//if 2
		}//for 2
		if(flag == 0)
		{
		printf("the number %d is prime \n",i);
		}
		else 
		{
		printf("the number %d is not prime \n",i);
		}
		}//for 1	
}