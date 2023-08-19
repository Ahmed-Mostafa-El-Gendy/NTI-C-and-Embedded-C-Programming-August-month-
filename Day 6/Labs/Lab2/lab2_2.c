/*
 ******************************************************************************
 * @file           : Lab2_2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use a swaap a function by address using pointer.
 * @date           : 14/August/2023 
 ******************************************************************************
 */
#include<stdio.h>
int swaap (int *ipt1 , int *iptr2 ); //function declartion 
int main()
{
	int number1 ; 
	int number2 ;
	printf("please enter the number1 : ");
	scanf("%d",&number1);
	printf("please enter the number2 : ");
	scanf("%d",&number2);
	printf("the before swaap number1 is %d \n",number1);
	printf("the before swaap number2 is %d \n",number2);
	swaap(&number1,&number2); // function call 
	printf("the after swaap number1 is %d \n",number1);
	printf("the after swaap number2 is %d \n",number2);
}
int swaap (int *iptr1,int *iptr2)//function defination  
{
	int temp ;
	temp = *iptr1 ;
	*iptr1 = *iptr2 ;
	*iptr2 = temp ;
}