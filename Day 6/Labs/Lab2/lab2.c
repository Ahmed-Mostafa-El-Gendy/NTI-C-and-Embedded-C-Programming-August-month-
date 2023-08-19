/*
 ******************************************************************************
 * @file           : Lab2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use a swaap a function by address using pointer.
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
int number1 = 50 ;
int number2 = 70 ;

void swaap (void);
int main ()
{
	int number1 = 50 ;
    int number2 = 70 ;
	printf("the number1 before swaap = %d \n",number1);
	printf("the number2 before swaap = %d \n",number2);
	swaap();
	printf("the number1 after swaap = %d \n",number1);
	printf("the number2 after swaap = %d \n ",number2);
}
void swaap (void)
{
	
	int *iptr1=&number1;
	*iptr1 = 70 ;
	int*iptr2=&number2;
	*iptr2=50;
}