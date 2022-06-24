#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void doTask1(void);
void doTask2(void);
void doTask3(void);
void doTask4(void);
void doTask5(void);
void doTask6(void);
void doTask7(void);
void doTask8(void);
void doTask9(void);
void doTask10(void);
void doTask11(void);
void doTask12(void);
void doTask13(void);
void doTask14(void);
void doTask15(void);
void doTask16(void);
void doTask17(void);
void doTask18(void);

float calculateResult(float, float);

int main()
{
	int32_t taskNum;
	printf("\tEnter the number of task to be completed: ");
	scanf("%d", &taskNum);

	while (taskNum > 0)
	{
		switch (taskNum)
		{
		case 1:
			doTask1();
			break;
		case 2:
			doTask2();
			break;
		case 3:
			doTask3();
			break;
		case 4:
			doTask4();
			break;
		case 5:
			doTask5();
			break;
		case 6:
			doTask6();
			break;
		case 7:
			doTask7();
			break;
		case 8:
			doTask8();
			break;
		case 9:
			doTask9();
			break;
		case 10:
			doTask10();
			break;
		case 11:
			doTask11();
			break;
		case 12:
			doTask12();
			break;
		case 13:
			doTask13();
			break;
		case 14:
			doTask14();
			break;
		case 15:
			doTask15();
			break;
		case 16:
			doTask16();
			break;
		case 17:
			doTask17();
			break;
		case 18:
			doTask18();
			break;
		default:
			printf("Incorrect input, try again\n");
			break;
		}

		printf("\n\tEnter the number of task to be completed (<=0 to escape): ");
		scanf("%d", &taskNum);
	}


	return 0;
}

void doTask1(void)
{
	const int32_t SIZE = 26;
	char alphabet[SIZE];

	printf("This task writes out the English alphabet\n");
	for (char ch = 'a'; ch <= 'z'; ch++)						// the array is written
	{
		alphabet[ch - 'a'] = ch;
	}
	for (int32_t count = 0; count < SIZE; count++)						// console output
	{
		printf("%c ", alphabet[count]);
	}
	printf("\n\tThe task is now complete!\n");
}

void doTask2(void)
{
	const int32_t ROWS = 5;

	for (int32_t rowNum = 1; rowNum <= ROWS; rowNum++)
	{
		for (int32_t collumnNum = 1; collumnNum <= rowNum; collumnNum++)
		{
			printf("$");
		}
		printf("\n");
	}
	printf("\tThe task is now complete!\n");
}

void doTask3(void)
{
	const int32_t ROWS = 6;

	for (int32_t rowNum = 1; rowNum <= ROWS; rowNum++)
	{
		for (char ch = 'F'; 'F' - ch < rowNum; ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	printf("\tThe task is now complete!\n");
}

void doTask4(void)
{
	const int32_t ROWS = 6;
	char ch = 'A';

	for (int32_t rowNum = 1; rowNum <= ROWS; rowNum++)
	{
		for (int32_t collumnNum = 1; collumnNum <= rowNum; collumnNum++, ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	printf("\tThe task is now complete!\n");
}

void doTask5(void)
{
	char baseLetter, ch;
	int32_t rows, i;

	printf("This task writes out a quirky pyramid\n");
	printf("Enter any capital English letter: ");
	scanf(" %c", &baseLetter);								// Using a whitespace character in scanf() would ignore any number 
															// of whitespace characters left in the input stream
	rows = (int32_t) (baseLetter - 'A' + 1);
	
	for (int32_t rowNum = 1; rowNum <= rows; rowNum++)
	{
		for (i = 1; i <= rows - rowNum; i++)
		{
			printf(" ");
		}

		ch = (char) ('A' - 1);

		for (i = 1; i <= rowNum; i++)
		{
			printf("%c", ++ch);
		}
		for (i = 1; i < rowNum; i++)
		{
			printf("%c", --ch);
		}
		printf("\n");
	}

	printf("\tThe task is now complete!\n");
}

void doTask6(void)
{
	int32_t startValue, stopValue, currentValue, rows;

	printf("This task calculates a table of squares and cubes\n");
	printf("Enter start and stop values: ");
	scanf("%d %d", &startValue, &stopValue);
	printf("Value Square Cube\n");

	for (currentValue = startValue; currentValue <= stopValue; currentValue++)
	{
		printf("%-5d %-6d %-d\n", currentValue, currentValue * currentValue, 
			currentValue * currentValue * currentValue);
	}

	printf("\tThe task is now complete!\n");
}

void doTask7(void)
{
	char string[30];
	int32_t stringLenght;

	printf("This task writes out input word backwards\n");
	printf("Enter the word: ");
	scanf("%s", string);

	stringLenght = strlen(string) - 1;
	printf("The word backwards: ");

	for (int32_t i = stringLenght; i >= 0; i--)
	{
		printf("%c", string[i]);
	}
	printf("\n\tThe task is now complete!\n");
}

void doTask8(void)
{
	float value1, value2, result;
	int32_t status;
	char garbageCollector;

	printf("Enter two float values: ");
	while (scanf("%f %f", &value1, &value2) == 2)
	{
		result = (value1 - value2) / (value1 * value2);
		printf("(%.2f - %.2f) / (%.2f * %.2f) = %.4f\n", 
			value1, value2, value1, value2, result);
		printf("Enter two float values (non-numerical input to escape): ");
	}
	while ((garbageCollector = getchar()) != '\n') {}

	printf("\tThe task is now complete!\n");
}

void doTask9(void)
{
	float value1, value2, result;
	int32_t status;
	char garbageCollector;

	printf("Enter two float values: ");
	while (scanf("%f %f", &value1, &value2) == 2)
	{
		result = calculateResult(value1, value2);
		printf("(%.2f - %.2f) / (%.2f * %.2f) = %.4f\n", 
			value1, value2, value1, value2, result);
		printf("Enter two float values (non-numerical input to escape): ");
	}
	while ((garbageCollector = getchar()) != '\n') {}

	printf("\tThe task is now complete!\n");
}

void doTask10(void)
{
	int32_t lowerLimit, upperLimit, lowerLimitSquare, upperLimitSquare, sum = 0;

	printf("This task calculates a sum of squares\n");
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lowerLimit, &upperLimit);

	while (upperLimit > lowerLimit)
	{
		lowerLimitSquare = lowerLimit * lowerLimit;
		upperLimitSquare = upperLimit * upperLimit;

		for (int32_t count = lowerLimit; count <= upperLimit; count++)
		{
			sum += count * count;
		}
		printf("Sum of squares of integers between %d and %d equals %d\n", 
			lowerLimitSquare, upperLimitSquare, sum);
		printf("Enter other pair of limits: ");
		scanf("%d %d", &lowerLimit, &upperLimit);
	}

	printf("\tThe task is now complete!\n");
}

void doTask11(void)
{
	const int32_t SIZE = 8;
	int32_t array[SIZE], i;

	printf("This task writes an integer array backwards\n");
	printf("Enter %d integer values: ", SIZE);

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The array backwards: ");

	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}

	printf("\n\tThe task is now complete!\n");
}

void doTask12(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask13(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask14(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask15(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask16(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask17(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask18(void)
{

	printf("\tThe task is now complete!\n");
}

float calculateResult(float x, float y)
{
	float res;
	res = (x - y) / (x * y);
	return res;
}
