/*
 ******************************************************************************
 * @file           : Lab3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use function to swaap.
 * @date           : 10 / August / 2023 
 ******************************************************************************
 */
#include <stdio.h>
int rows ; 
int colums ;
int main ()
{
	int Arr[3][3];	
	printf("***welcome*** \n");
	
	for(rows=0;rows<3;rows++)
	{
		for(colums=0;colums<3;colums++)
		{
			printf("the element of array[%d][%d] = ",rows,colums);
			scanf("%d",&Arr[rows][colums]);
		}
	}
	//for origin Arr
    printf("for original matrix \n\n\n");	
	for(rows=0;rows<3;rows++)
	{
		for(colums=0;colums<3;colums++)
		{
			printf("%d \t",Arr[rows][colums]);
		}
		printf("\n");
	}
	//for origin Arr 
	printf("for transpose matrix \n\n\n");
	for(rows=0;rows<3;rows++)
	{
		for(colums=0;colums<3;colums++)
		{
			printf("%d \t",Arr[colums][rows]);
		}
		printf("\n");
	}
}