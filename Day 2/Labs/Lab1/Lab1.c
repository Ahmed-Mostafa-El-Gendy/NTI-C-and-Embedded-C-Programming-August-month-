/*
 ******************************************************************************
 * @file           : Lab1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : the user to enter two values and print their summation, subtraction, division, and multiplication.
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int op1,op2;
	printf("please enter the numbers \n ");
	printf("please enter the first numbers =");
	scanf("%d",&op1);
	printf("please enter the second numbers = ");
	scanf("%d",&op2);
	printf("op1+op2=%d \n",op1+op2);
	printf("op1-op2=%d \n",op1-op2);
	printf("op1*op2=%d \n",op1*op2);
	printf("op1/op2=%d \n",op1/op2);
	
}