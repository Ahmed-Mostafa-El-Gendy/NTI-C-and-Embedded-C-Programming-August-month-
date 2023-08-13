/*
 ******************************************************************************
 * @file           : Lab1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use array to get the sum and avrage .
 * @date           : 10 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int arr[10];
	int sum = 0 ;
	float avrg = 0 ;
	printf("*****welcome*******\n");
	for(int i = 0 ; i < 10 ; i++)
	{
	 printf("please enter the number of arr[%d] : ",i);
     scanf("%d",&arr[i]);
	 //sum = sum + arr[i];
	}
	avrg = sum / 10.0 ;
	printf("the sum is = %d \n",sum);
	printf("the sum is = %lf ",avrg);
}