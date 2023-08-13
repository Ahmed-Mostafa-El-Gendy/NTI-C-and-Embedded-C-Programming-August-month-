/*
 ******************************************************************************
 * @file           : task2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use print the total even & odd .
 * @date           : 11 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
void evenodd (int Arr[]);
int main ()
{
	int Arr[10];
	int i ;
	for(i=0 ; i<10 ;i++)
	{
		printf("the element of array [%d] = ",i);
		scanf("%d",&Arr[i]);
	}
	evenodd (Arr);
}
void evenodd (int Arr[])
{
	int counter_even =0;
	int counter_odd = 0;
	int i ;
	for(i=0;i<10;i++)
	{
		if(Arr[i]%2==0)
		{
		counter_even++;
		}
		else
		{
		counter_odd++;
		}
	}
    printf("the total number even = %d \n",counter_even);
    printf("the total number odd = %d",counter_odd);
}