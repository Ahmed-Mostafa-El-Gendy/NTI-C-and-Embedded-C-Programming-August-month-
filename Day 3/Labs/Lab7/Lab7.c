/*
 ******************************************************************************
 * @file           : Lab7.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to reverse a number.
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main ()
 {
	int number , reminder ;
	int reverse = 0 ; 
	printf("please enter the number : ");
	scanf("%d",&number);
	while(number!=0)
	{
		reminder = number % 10 ;
		reverse = reverse * 10 + reminder ; 
		number = number / 10 ;
		
	}
	printf("the reverse number = %d \n",reverse );
	 printf("thank you ");
 }