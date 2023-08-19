/*
 ******************************************************************************
 * @file           : Lab1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use a simple pointer.
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
int main()
{
	int *iptr ;
	int x = 20 ;
	printf("x before = %d \n",x);
    iptr = &x ;
	*iptr=50 ;
	//printf("x before = %d \n",x);
	printf("x after= %d",*iptr);
}