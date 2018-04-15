#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
void fillCharMas(char *mas, int length)
{
	for (short int i = 0; i < length; i++)
		*(mas + i) = 95 + rand() % 25;
}
void printCharMas(char *mas, int length)
{
	for (short int i = 0; i < length; i++)
		printf("%c", *(mas + i));
	printf("\n");
}
void SearchNumSwitchNumToExclaim(char *mas, int length)
{
	for (short int i = 0; i < length; i++)
	{
		if (*(mas + i) == 0 || *(mas + i) == 1 || *(mas + i) == 2 || *(mas + i) == 3 || *(mas + i) == 4 || *(mas + i) == 5 || *(mas + i) == 6 || *(mas + i) == 7 || *(mas + i) == 8 || *(mas + i) == 9)
			*(mas + i) = '!';
		else
			printf("This array doesn't has the numbers.\n");
	}
}
void fillCharMatrix(char *mas, int row, int col)
{
	for (short int i = 0; i < row; i++)
		for (short int j = 0; j < col; j++)
			*(mas + i * row + j) = 95 + rand() % 25;
}
void printCharMatrix(char *mas, int row, int col)
{
	for (short int i = 0; i < row; i++)
	{
		for (short int j = 0; j < col; j++)
			printf("%d\t", *(mas + i * row + j));
		printf("\n");
	}
}
void SearchPlusMinusUmnoj(char *mas, int row, int col)
{
	int count = 0;
	for (short int i = 0; i < row; i++)
		for (short int j = 0; j < col; j++)
		{
			if (*(mas + i * row + j) == '+' || *(mas + i * row + j) == '-' || *(mas + i * row + j) == '*')
				count++;
			else
				printf("Array doesn't has: + or -, or *\n");
		}
	printf("+ or -, or * in array are %d.\n", count);
}