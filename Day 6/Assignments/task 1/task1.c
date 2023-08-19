/*
 ******************************************************************************
 * @file           : task1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C function to swap the contents of two arrays with the same
                     length using pointers.
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
void swaap (int *iarr1 , int *iarr2 , int size );
void printswaap (int *arr , int size );
int main ()
{
	int Arr1[5]={10,20,30,40,50};
	int Arr2[5]={60,70,80,90,100};
	printf("the arr1 before swaap = ");
	printswaap (Arr1,5);
	printf("the arr2 before swaap = ");
	printswaap (Arr2,5);
	swaap (Arr1,Arr2,5);
	printf("the arr1 after swaap = ");
	printswaap (Arr1,5);
	printf("the arr2 before swaap = ");
	printswaap (Arr2,5);
}
void swaap (int *iarr1 , int *iarr2 , int size )
{
	int temp ;
	int i ;
	for(i=0 ; i<size ;i++)
	{
		temp = *(iarr1+i) ;
	   *(iarr1+i) = *(iarr2+i) ;
	   *(iarr2+i) = temp ;
	}
}
void printswaap (int *arr , int size )
{
	int i ; 
	for(i=0 ; i<size ; i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n");
}
