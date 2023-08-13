/*
 ******************************************************************************
 * @file           : task3.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use read age of people.
 * @date           : 11 / August / 2023 
 ******************************************************************************
 */
#include<stdio.h>	
int main ()
{
	int baby = 0;
	int Attented_school=0;
	int Adult = 0;
	int Arr[15];
	int i ;
	for(i=0 ; i<15 ;i++)
	{
		printf("the element of array [%d] = ",i);
		scanf("%d",&Arr[i]);
	}
	i=0; //to enter the loop 
	while(i<15)
	{
		if((Arr[i]>=0)&&(Arr[i]<6))
		{
			baby++;
		}
		else if((Arr[i]>=6)&&(Arr[i]<18))
		{
			Attented_school++;
		}
		else
		{
		Adult++;	
		}
	i++;
	}
printf("number of babys = %d \n ",baby);
	printf("number of Attented_school = %d \n",Attented_school);
	printf("number of Adult = %d \n",Adult);
	printf("***Have a nice day");
}	