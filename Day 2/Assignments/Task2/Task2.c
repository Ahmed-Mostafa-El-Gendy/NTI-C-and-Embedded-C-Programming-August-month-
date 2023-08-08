/*
 ******************************************************************************
 * @file           : Task2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a code that convert temperature from degree centigrade to Fahrenheit.
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main()
 {
	 float centigrade , fehrenheit ;
	 printf("please enter the tempreature = ");
	 scanf("%f",&centigrade);
	 printf("the tempreature in centigrade is = %f \n",centigrade);
	 fehrenheit = (centigrade*9/5)+32 ; 
	 printf("the tempreature in fehrenheit is = %f \n",fehrenheit);
	 printf("thank you ");
 }
 /*
 to convert temperatures in degrees Celsius to Fahrenheit, multiply by 1.8 (or 9/5) and add 32.
 */