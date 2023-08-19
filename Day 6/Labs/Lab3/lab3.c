/*
 ******************************************************************************
 * @file           : Lab3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use a function to sum and multi and sub .
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
void sum_mul(int a , int b , int *sum , int *mul , int *sub);
int main ()
{
	int number1 ; 
	int number2 ;
	int sum ;
	int mul ;
	int sub ;
	printf("please enter the number1 : ");
	scanf("%d",&number1);
	printf("please enter the number2 : ");
	scanf("%d",&number2);
	sum_mul(number1,number2,&sum,&mul,&sub);
	printf("the result of sum = %d \n",sum);
	printf("the result of mul = %d \n",mul);
	printf("the result of sub = %d",sub);
	
}
void sum_mul(int a , int b , int *sum , int *mul , int *sub)
{
	*sum = a+b ;
	*mul = a*b ;
	*sub = a-b ; //option from me 
}