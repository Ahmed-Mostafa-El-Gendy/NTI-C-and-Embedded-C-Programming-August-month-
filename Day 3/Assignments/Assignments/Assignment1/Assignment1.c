/*
 ******************************************************************************
 * @file           : Assignment1.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C program to make a pattern.
 * @date           : 9 / August / 2023 
 ******************************************************************************
 */
 #include<stdio.h>
 int main ()
 {
	 int number = 1;
	 for(int i = 1 ; i<5 ; i++)
	 {
		 for(int j=1;j<=i;j++)
		 {
			printf("%d",number);
            number++;			
		 }
		 printf("\n");
	 }
 }