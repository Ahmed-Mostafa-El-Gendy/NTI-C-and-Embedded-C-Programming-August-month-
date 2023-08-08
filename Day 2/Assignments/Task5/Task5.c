/*
 ******************************************************************************
 * @file           : Task5.c
 * @author         : Ahmed_Mostafa_El_Gendy
 * @brief          : Write a C code that ask the user to enter his ID and then the program will print his name.
 * @date           : 7 / August / 2023 
 ******************************************************************************
 */
 #include <stdio.h>
void main(void)
{
	int id ;
	printf("plrase enter your id : ");
	scanf("%d",&id);
	switch (id)
	{
		case 1122 :
		printf("hello fahd ");
		break;
		
		case 9110 :
		printf("hello ahmed ");
		break;
		
		case 5566 :
		printf("hello sara ");
		break;
		
		case 8687 :
		printf("hello amr ");
		break;
		
		case 1245 :
		printf("hello ali");
		break;
		
		case 7896 :
		printf("hello yasmin ");
		break;
		
		default :
		printf("wrong id sorry try again ");
		break;
	}
	
}