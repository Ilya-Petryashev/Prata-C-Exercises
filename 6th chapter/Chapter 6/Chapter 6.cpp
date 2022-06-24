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
	for (char ch = 'a'; ch <= 'z'; ch++)								// the array is written
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
	scanf(" %c", &baseLetter);									// Using a whitespace character in scanf() would ignore any number 
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

		printf("Enter other pair of limits (limit1 > limit2 for escape): ");
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
	int32_t numOfElements, sign = 1;
	float constantSignSum, alternatingSignSum;

	printf("This task calculates sums of two infinite series of numbers\n");
	printf("Enter number of elements in the series: ");
	scanf("%d", &numOfElements);

	while (numOfElements > 0)
	{
		constantSignSum = alternatingSignSum = 0;
		for (float divisor = 1.0; divisor <= (float) numOfElements; divisor++)
		{
			constantSignSum += 1.0 / divisor;
			alternatingSignSum += sign * 1.0 / divisor;
			sign = -sign;
		}
		printf("If the number of series equals %d, then: \n", numOfElements);
		printf("  1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %f\n", constantSignSum);
		printf("  1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %f\n", alternatingSignSum);

		printf("Enter other number of elements in the series (<=0 to escape): ");
		scanf("%d", &numOfElements);
	}
	printf("\tThe task is now complete!\n");
}

void doTask13(void)
{
	const int32_t SIZE = 8;
	int index = 0, powersOf2[SIZE];

	printf("This task calculates first %d powers of 2:\n", SIZE);
	for (int32_t power = 1; power <= SIZE; power++)
	{
		powersOf2[power - 1] = 1;
		for (int32_t i = 1; i <= power; i++)
		{
			powersOf2[power - 1] *= 2;
		}
	}
	do
	{
		printf("%d ", powersOf2[index]);
	} while (++index < SIZE);

	printf("\n\tThe task is now complete!\n");
}

void doTask14(void)
{
	const int32_t SIZE = 8;
	double data[SIZE], sum[SIZE];
	int32_t i;

	printf("Enter %d double values: ", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%lf", &data[i]);
	}

	sum[0] = data[0];
	for (i = 1; i < SIZE; i++)
	{
		sum[i] = sum[i - 1] + data[i];
	}

	for (i = 0; i < SIZE; i++)										// i was lazy to print according to the task
	{
		printf("%.2f ", data[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%.2f ", sum[i]);
	}
	printf("\n\tThe task is now complete!\n");
}

void doTask15(void)
{
	const int32_t SIZE = 256;
	char string[SIZE], temp;

	printf("Enter any string (e.g. your name and surmane): ");
	scanf("%c", &temp);												// temp statement to clear buffer
	scanf("%[^\n]", string);										// impossible to read strings with spaces using scanf(%c) in cycle

	printf("Input string backwards: ");
	for (int32_t i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}
	printf("\n\tThe task is now complete!\n");
}

void doTask16(void)
{
	float depositDaphne, depositDeirdre;
	const float INIT_CONTRIBUTION_DAPHNE = 100.0, INIT_CONTRIBUTION_DEIRDRE = 100.0;
	int32_t yearCount = 0;

	printf("This task teaches us financial literacy\n");

	depositDaphne = INIT_CONTRIBUTION_DAPHNE;
	depositDeirdre = INIT_CONTRIBUTION_DEIRDRE;
	do
	{
		depositDaphne += 0.1 * INIT_CONTRIBUTION_DAPHNE;
		depositDeirdre *= 1.05;
		yearCount++;
	} while (depositDaphne > depositDeirdre);

	printf("Within %d years Deirdre will have more money, than Daphne\n", yearCount);
	printf("By this time, Daphne's deposit will have been worth $%.2f\n", depositDaphne);
	printf("And Dierdre's deposit will have been worth $%.2f\n", depositDeirdre);

	printf("\tThe task is now complete!\n");
}

void doTask17(void)
{
	float deposit = 1000000.0;
	int32_t yearCount = 0;

	printf("This task calculates how many years of wealth can be bought by $1'000'000\n");

	do
	{
		deposit = 1.08 * deposit - 100000.0;
		yearCount++;
	} while (deposit > 0);

	printf("Within %d years Chucky Lucky will run out of money\n", yearCount);

	printf("\tThe task is now complete!\n");
}

void doTask18(void)
{
	const int32_t DUNBARS_NUMBER = 150;
	int32_t weakCount = 0, friendsCount = 5;

	printf("This task teaches us how social networks work\n");

	do
	{
		weakCount++;
		friendsCount = 2 * (friendsCount - weakCount);
	} while (friendsCount <= DUNBARS_NUMBER);

	printf("Within %d weaks prof. Robins will have more friends, than he can handle\n", weakCount);
	printf("\tThe task is now complete!\n");
}

float calculateResult(float x, float y)
{
	float res;
	res = (x - y) / (x * y);
	return res;
}
