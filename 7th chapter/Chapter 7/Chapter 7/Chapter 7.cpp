#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

#define HOURLY_PAY_RATE 10
#define STANDARD_HOURS 40
#define OVERTIME_COEF 1.5
#define TAX_RATE_0_300 0.15
#define TAX_RATE_300_450 0.2
#define TAX_RATE_450 0.25

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
	const char SPACE = ' ';
	const char NEWLINE = '\n';
	const char STOP = '#';
	char ch, previousCh;
	int32_t spaceCount, lineCount, symbolCount;
	spaceCount = lineCount = symbolCount = 0;

	printf("This task analizes input text\n");
	printf("Enter the text, feel free to use several lines:\n");
	getchar();		// read and discard '\n' from scanf(taskNum) in main()

	while ((ch = getchar()) != STOP)
	{
		if (ch == SPACE)
		{
			spaceCount++;
		}
		else if (ch == NEWLINE)
		{
			lineCount++;
		}
		else
		{
			symbolCount++;
		}
		previousCh = ch;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '#' in case of partial line
		continue;

	printf("This text includes %d spaces, %d lines and %d OTHER symbols\n", spaceCount, lineCount, symbolCount);
	if (previousCh != NEWLINE)
	{
		printf("This text includes a partial line, thus everything you wrote after %c wasn't considered\n", STOP);
	}

	printf("\tThe task is now complete!\n");
}

void doTask2(void)
{
	const char NEWLINE = '\n';
	const char STOP = '#';
	char ch, previousCh;
	int32_t symbolCount = 0;

	printf("This task provides ASCII codes for input text's symbols\n");
	printf("Enter the text in ONE line:\n");	
	/* if input several lines, getchar() will work at '\n',
	   thus program will print "symbol-code" pairs immediately after newline */

	getchar();	// read and discard '\n' from scanf(taskNum) in main()

	while ((ch = getchar()) != STOP)
	{
		if (ch != NEWLINE)
		{
			symbolCount++;
			printf("'%c'-%d\t", ch, ch);
		}
		else 
		{ 
			printf("\n"); 
		}
		if (symbolCount % 8 == 0)
		{
			printf("\n");
		}			
		previousCh = ch;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '#' in case of partial line
		continue;

	if (previousCh != NEWLINE)
	{
		printf("\nThis text includes a partial line, thus everything you wrote after %c wasn't considered\n", STOP);
	}
	printf("\tThe task is now complete!\n");
}

void doTask3(void)
{
	int32_t value, oddCount, oddSum,  evenCount, evenSum;
	float oddAvg, evenAvg;
	oddCount = oddSum = evenCount = evenSum = 0;

	printf("This task counts odd and even values and displays their average\n");
	printf("Enter integer values (0 to stop):\n");

	while (scanf("%d", &value) == 1)
	{
		if (value == 0)
		{
			break;
		}
		if (value % 2 == 0)
		{
			evenCount++;
			evenSum += value;
		}
		else
		{
			oddCount++;
			oddSum += value;
		}
		evenAvg = (float)evenSum / (float)evenCount;
		oddAvg = (float)oddSum / (float)oddCount;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '0' in case of partial line
		continue;

	printf("You entered %d even values, their average equals %.2f\n", evenCount, evenAvg);
	printf("You entered %d odd values, their average equals %.2f\n", oddCount, oddAvg);

	printf("\tThe task is now complete!\n");
}

void doTask4(void)
{
	const char DOT = '.';
	const char EXCLAMATION = '!';
	const char STOP = '#';
	const char NEWLINE = '\n';
	char ch, previousCh;
	int32_t changeCount;
	changeCount = 0;

	printf("This task replaces dots and exclamation marks in input text\n");
	printf("Enter the text, feel free to use several lines:\n");
	getchar();		// read and discard '\n' from scanf(taskNum) in main()

	while ((ch = getchar()) != STOP)
	{
		if (ch == DOT)
		{
			putchar(EXCLAMATION);
			changeCount++;
		}
		else if (ch == EXCLAMATION)
		{
			putchar(EXCLAMATION);
			putchar(EXCLAMATION);
			changeCount++;
		}
		else
		{
			putchar(ch);
		}
		previousCh = ch;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '#' in case of partial line
		continue;

	printf("\n%d changes were done to your text\n", changeCount);
	if (previousCh != NEWLINE)
	{
		printf("This text includes a partial line, thus everything you wrote after %c wasn't considered\n", STOP);
	}
	printf("\tThe task is now complete!\n");
}

void doTask5(void)
{
	const char DOT = '.';
	const char EXCLAMATION = '!';
	const char STOP = '#';
	const char NEWLINE = '\n';
	char ch, previousCh;
	int32_t changeCount;
	changeCount = 0;

	printf("This task replaces dots and exclamation marks in input text\n");
	printf("Enter the text, feel free to use several lines:\n");
	getchar();		// read and discard '\n' from scanf(taskNum) in main()

	while ((ch = getchar()) != STOP)
	{
		switch (ch)
		{
		case DOT:
			{
				putchar(EXCLAMATION);
				changeCount++;
				break;
			}
		case EXCLAMATION:
			{
				putchar(EXCLAMATION);
				putchar(EXCLAMATION);
				changeCount++;
				break;
			}
		default:
			putchar(ch);
			break;
		}
		previousCh = ch;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '#' in case of partial line
		continue;

	printf("\n%d changes were done to your text\n", changeCount);
	if (previousCh != NEWLINE)
	{
		printf("This text includes a partial line, thus everything you wrote after %c wasn't considered\n", STOP);
	}
	printf("\tThe task is now complete!\n");
}

void doTask6(void)
{
	const char STOP = '#';
	const char NEWLINE = '\n';
	char current, previous;
	int32_t eiCount = 0;

	printf("This task count ei's in input text\n");
	printf("Enter the text:\n");
	getchar();					// read and discard '\n' from scanf(taskNum) in main()

	previous = getchar();		// read the first symbol in text 
	while ((current = getchar()) != STOP)
	{
		if (previous == 'e' && current == 'i')
		{
			eiCount++;
		}
		previous = current;
	}
	while (getchar() != '\n')  // read and discard everything that's left after '#' in case of partial line
		continue;

	printf("%d ei's were found in your text\n", eiCount);
	if (previous != NEWLINE)
	{
		printf("This text includes a partial line, thus everything you wrote after %c wasn't considered\n", STOP);
	}
	printf("\tThe task is now complete!\n");
}

void doTask7(void)
{
	int32_t hours;
	float pretaxSalary, tax, netSalary;

	printf("This task calculates your salary and taxes\n");
	printf("How many hours have you worked this week?: \n");
	scanf("%d", &hours);

	if (hours > STANDARD_HOURS)
	{
		pretaxSalary = (STANDARD_HOURS * HOURLY_PAY_RATE) + (hours - STANDARD_HOURS) * (OVERTIME_COEF * HOURLY_PAY_RATE);
	}
	else
	{
		pretaxSalary = hours * HOURLY_PAY_RATE;
	}

	if (pretaxSalary <= 300)
	{
		tax = TAX_RATE_0_300 * pretaxSalary;
	}
	else if (pretaxSalary <= 450)
	{
		tax = (TAX_RATE_0_300 * 300) + (TAX_RATE_300_450 * (pretaxSalary - 300));
	}
	else
	{
		tax = (TAX_RATE_0_300 * 300) + (TAX_RATE_300_450 * 150) + (TAX_RATE_450 * (pretaxSalary - 450));
	}

	netSalary = pretaxSalary - tax;

	printf("You've made $%.2f, but the tax've been $%.2f, thus you earn $%.2f\n", pretaxSalary, tax, netSalary);

	printf("\tThe task is now complete!\n");
}

void doTask8(void)
{
	
	printf("\tThe task is now complete!\n");
}

void doTask9(void)
{
	
	printf("\tThe task is now complete!\n");
}

void doTask10(void)
{

	printf("\tThe task is now complete!\n");
}

void doTask11(void)
{
	
	printf("\n\tThe task is now complete!\n");
}

