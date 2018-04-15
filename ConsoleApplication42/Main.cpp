#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Header.h"
void main()
{
	srand(time(NULL));
	short int w;
	printf("Enter number of task: ");
	scanf("%hu", &w);
	system("cls");
	switch (w)
	{
	case 1:
	{
		//1.	Составить программу, которая:
		//a.запрашивает имя человека и повторяет его на экране;
		//b.запрашивает имя человека и повторяет его на экране с приветствием.
		char *name = NULL;

		name = (char*)malloc(sizeof(char));

		printf("Enter your name, please: ");
		scanf("%s", name);
		printf("%s: \n", name);


		printf("Hello, %s\n", name);
	}
	break;
	case 2:
	{
		//2.Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".
		char *footballTeam = NULL;

		footballTeam = (char*)malloc(sizeof(char));

		printf("Enter name of football team: ");
		scanf("%s", footballTeam);
		printf("%s - is champion in our competition today!!!\n", footballTeam);
	}
	break;
	case 3:
	{
		//3.Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную строку.
		char *name = NULL, *surname = NULL;

		name = (char*)malloc(sizeof(char));
		surname = (char*)malloc(sizeof(char));

		printf("Enter your name, please: ");
		scanf("%s", name);
		system("cls");
		printf("Enter your surname, please: ");
		scanf("%s", surname);
		system("cls");

		printf("Name: %s\n", name);
		printf("Surname: %s\n", surname);
	}
	break;
	case 4:
	{
		//4.Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение :
		//"Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).
		char *country = NULL;

		char Russia[] = "Russia";
		char UK[] = "UK";
		char Kazakhstan[] = "Kazakhstan";
		char USA[] = "USA";

		country = (char*)malloc(sizeof(char));

		printf("(Programm gets Kazakhstan, Russia, UK and USA.)\n");
		printf("\n");
		printf("Enter country: ");
		scanf("%s", country);
		if (country = Russia)
			printf("Capital of Russia - Moscow.\n");
		else if (country = UK)
			printf("Capital of UK - London.\n");
		else if (country = Kazakhstan)
			printf("Capital of Kazakhstan - Astana.\n");
		else if (country = USA)
			printf("Capital of USA - Washington.\n");
		else
			break;
	}
	break;
	case 5:
	{
		//5.Дано название футбольного клуба. Определить количество символов в нем.
		char *footballTeam = NULL;

		footballTeam = (char*)malloc(sizeof(char));

		printf("Enter name of football team: ");
		scanf("%s", footballTeam);
		printf("Letters in name of this football team is %d.\n", strlen(footballTeam));
	}
	break;
	case 6:
	{
		//6.Дано название города. Определить, четно или нет количество символов в нем.
		char *city = NULL;

		city = (char*)malloc(sizeof(char));

		printf("Enter name of city: ");
		scanf("%s", city);
		if (strlen(city) % 2 == 0)
			printf("Even.\n");
		else
			printf("Odd.\n");
	}
	break;
	case 7:
	{
		//7.Даны две фамилии. Определить, какая из них длиннее.
		char *SecondName1 = NULL, *SecondName2 = NULL;

		SecondName1 = (char*)malloc(sizeof(char));
		SecondName2 = (char*)malloc(sizeof(char));

		printf("Enter first surname: ");
		scanf("%s", SecondName1);
		printf("Enter second surname: ");
		scanf("%s", SecondName2);

		if (strlen(SecondName1) > strlen(SecondName2))
			printf("First surname has bigger letters than second.\n");
		else if (strlen(SecondName2) > strlen(SecondName1))
			printf("Second surname has bigger letters than first.\n");
		else
			printf("Both of them are qual.\n");
	}
	break;
	case 8:
	{
		//8.Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.
		char *city1 = NULL, *city2 = NULL, *city3 = NULL;

		int l1, l2, l3;

		city1 = (char*)malloc(sizeof(char));
		city2 = (char*)malloc(sizeof(char));
		city3 = (char*)malloc(sizeof(char));


		printf("Enter name of first city: ");
		scanf("%s", city1);
		printf("Enter name of second city: ");
		scanf("%s", city2);
		printf("Enter name of third city: ");
		scanf("%s", city3);

		l1 = strlen(city1);
		l2 = strlen(city2);
		l3 = strlen(city3);

		if (l1 > l2 && l1 > l3 && l2 < l3)
			printf("Min - %s, max - %s\n", l2, l1);
		else if (l1 > l2 && l1 > l3 && l2 > l3)
			printf("Min - %s, max - %s\n", l3, l1);
		else if (l2 > l1 && l2 > l3 && l1 > l3)
			printf("Min - %s, max - %s\n", l3, l2);
		else if (l2 > l1 && l2 > l3 && l1 < l3)
			printf("Min - %s, max - %s\n", l3, l2);
		else if (l3 > l1 && l3 > l2 && l1 < l2)
			printf("Min - %s, max - %s\n", l1, l3);
		else if (l3 > l1 && l3 > l2 && l1 > l2)
			printf("Min - %s, max - %s\n", l2, l3);
		else
			printf("They are quel.\n");
	}
	break;
	case 9:
	{
		//9.Дано слово. Вывести на экран его третий символ
		char *word = NULL;

		word = (char*)malloc(sizeof(char));

		printf("Enter any word: ");
		scanf("%s", word);
		printf("Third letter of this word is - %c\n", *(word + 2));
	}
	break;
	case 10:
	{
		//10.Введите массив символов из 12 элементов. Замените каждый символ - цифру на символ '!'
		char *mas = NULL;
		int length = 12;

		mas = (char*)malloc(length * sizeof(char));

		fillCharMas(mas, length);
		printCharMas(mas, length);
		SearchNumSwitchNumToExclaim(mas, length);
		printf("\n");
		printf("Changed array: \n");
		printCharMas(mas, length);
		printf("\n");

		free(mas);
	}
	break;
	case 11:
	{
		//11.Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы + , -, *.
		char *mas = NULL;
		int row = 2, col = 6;

		mas = (char*)malloc(sizeof(char));

		fillCharMatrix(mas, row, col);
		printCharMatrix(mas, row, col);
		SearchPlusMinusUmnoj(mas, row, col);
	}
	break;
	case 12:
	{
		//12.Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.
		char *mas = NULL;
		int count = 0;

		mas = (char*)malloc(sizeof(char));

		printf("Enter 15 char elements of array by string: ");
		scanf("%s", mas);
		for (short int h = 0; h < 15; h++)
		{
			if (*mas >= 0 && *mas <= 15)
			{
				for (short int i = 0; i < 15; i++)
					if (*(mas + i) == 'А' || *(mas + i) == 'а' || *(mas + i) == 'Е' || *(mas + i) == 'е' || *(mas + i) == 'Ё' || *(mas + i) == 'ё' || *(mas + i) == 'И' || *(mas + i) == 'и' || *(mas + i) == 'Й' || *(mas + i) == 'й' || *(mas + i) == 'О' || *(mas + i) == 'о' || *(mas + i) == 'У' || *(mas + i) == 'у' || *(mas + i) == 'Ы' || *(mas + i) == 'ы' || *(mas + i) == 'Э' || *(mas + i) == 'э' || *(mas + i) == 'Ю' || *(mas + i) == 'ю' || *(mas + i) == 'Я' || *(mas + i) == 'я')
						count++;
				printf("Count of russian vowel letters - %d\n", count);
			}
			else
				printf("In this array > than 15 letters.\n");
		}
	}
	break;
	case 13:
	{
		//13.Дан массив символов, среди которых есть символ двоеточие ‘ : ’. Определить, сколько символов ему предшествует.
		char *mas = NULL;

		mas = (char*)malloc(sizeof(char));

		printf("Enter char array and one ':' \n");
		scanf("%s", mas);
		for (short int i = 0; i < strlen(mas); i++)
		{
			if (*(mas + i) == ':')
			{
				printf("%d - symbols before array.\n", strlen((mas + i) - 1));
			}
		}
	}
	break;
	case 14:
	{
		//14.Дан массив символов. Определить, сколько раз входит в него группа букв abc.
		char *mas = NULL, *abc = "abc";
		int length = 9, count = 0;

		mas = (char*)malloc(sizeof(char));

		fillCharMas(mas, length);
		printCharMas(mas, length);

		for (short int i = 0; i < length; i++)
		{
			if (*(mas + i) == 'a' && *(mas + i + 1) == 'b' && *(mas + i + 2) == 'c')
				count++;
		}

		printf("Group (abc) is %d times.\n", count);
	}
	break;
	case 15:
	{
		//15.Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.
		char *mas1 = NULL, *mas2 = NULL, *mas3 = NULL;
		int length1 = 1, length2 = 1, length3 = 1;

		printf("Enter length of first array: ");
		scanf("%d", length1);
		printf("Enter length of second array: ");
		scanf("%d", length2);
		length3 = length1 + length2;

		mas1 = (char*)malloc(length1 * sizeof(char));
		mas2 = (char*)malloc(length2 * sizeof(char));
		mas3 = (char*)malloc(length3 * sizeof(char));

		fillCharMas(mas1, length1);
		printCharMas(mas1, length1);
		fillCharMas(mas2, length2);
		printCharMas(mas2, length2);

		for (short int i = 0; i < length3; i++)
			if (*(mas1 + i) == *(mas2 + i))
				*(mas3 + i) = *(mas1 + i);

		*(mas3 + strlen(mas3) - 1) = '\0';

		printf("Same elements in both arrays: \n");

		for (short int i = 0; i < length3; i++)
		{
			printf("%d\t", *(mas3 + i));
		}
	}
	break;
	}
}