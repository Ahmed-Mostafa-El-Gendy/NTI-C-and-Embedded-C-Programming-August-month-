/*
 ******************************************************************************
 * @file           : Lab4.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use a function to knom the smallest number in array.
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
int smallestarr (int *Arr , int size) ;
int main ()
{
	int Arr[10];
	int i ;
	for (i=0 ; i<10 ; i++)
	{
		printf("the element of arrey [%d] = ",i+1);
		scanf("%d",&Arr[i]);
	}
        int result = smallestarr (Arr,10) ;
	printf("the smallest number of array = %d",result);
}
int smallestarr (int *Arr , int size )
{
	int counter ;
	int smallArr = Arr[0];
	for(counter = 1 ; counter < size ; counter++)
	{
		if(*(Arr+counter)<smallArr)
			smallArr = *(Arr+counter);
	}
	return smallArr ;
}