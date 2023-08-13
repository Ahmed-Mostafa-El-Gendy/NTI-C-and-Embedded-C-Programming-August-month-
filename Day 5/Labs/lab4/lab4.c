/*
 ******************************************************************************
 * @file           : Lab4.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use convert the word from upper to lower case .
 * @date           : 10 / August / 2023 
 ******************************************************************************
 */
#include <stdio.h>
int main()
{
	char string[20];
	printf("enter the string:");
	scanf("%s",&string);
	for(int i=0;string[i]!=0;i++)
	{
		if (string[i]<'a')
		{
			string[i]=string[i] + 32;
		}
	}
	printf("%s",string);
}