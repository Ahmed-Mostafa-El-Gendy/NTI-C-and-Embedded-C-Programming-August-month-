/*
 ******************************************************************************
 * @file           : Lab2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C code that ask the user to enter his birth year and then print his age in years.
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>
int main ()
{
	int age,birth,year  ;
	printf("please enter you birth day = ");
	scanf("%d",&birth);
	printf("please enter the current year = ");
	scanf("%d",&year);
	age = year - birth ;
	printf("your age is %d years old \n ",age);
	printf("thank you ");
}