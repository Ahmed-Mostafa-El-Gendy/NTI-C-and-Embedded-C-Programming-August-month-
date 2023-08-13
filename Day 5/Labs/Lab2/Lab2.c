/*
 ******************************************************************************
 * @file           : Lab2.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : How to use function to swaap.
 * @date           : 10 / August / 2023 
 ******************************************************************************
 */
#include <stdio.h>

int x = 10;
int y = 20;

void Swap (void);

void main(void)
{
	printf("X before swap = %d\n",x);
	printf("Y before swap = %d\n\n\n",y);
	
	Swap();
	
	printf("X after swap = %d\n",x);
	printf("Y after swap = %d\n",y);
}


void Swap (void)
{
	int z = x;
	x = y;
	y = z;
}
