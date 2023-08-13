/*
 ******************************************************************************
 * @file           : task1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use print the first max and second max .
 * @date           : 11 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int maxnum = 0 ;
	int secmaxnum= 0;
	int Arr[10];
	int i ;
	for(i=0 ; i<10 ;i++)
	{
		printf("the element of array [%d] = ",i);
		scanf("%d",&Arr[i]);
		if(maxnum<Arr[i])
		{
			maxnum=Arr[i];
		}
	}
	printf("the first max number = %d \n",maxnum);
	
	for(i=0;i<10;i++)
	{
		if((Arr[i]>secmaxnum)&&(Arr[i]<maxnum))
		{
			secmaxnum = Arr[i];
		}
	}
	printf("the second max number = %d \n",secmaxnum);
}