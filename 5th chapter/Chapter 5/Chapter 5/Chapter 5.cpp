#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

void doTask1(void);
void doTask2(void);
void doTask3(void);
void doTask4(void);
void doTask5(void);
void doTask6(void);
void doTask7(void);
void doTask8(void);
void doTask9(void);

void displayCube(double);
void Temperatures(double);

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
	const int32_t MIN_IN_H = 60;
	int32_t minutes, hours;

	printf("Enter time in minutes: ");
	scanf("%d", &minutes);

	while (minutes > 0)
	{
		hours = minutes / MIN_IN_H;
		minutes = minutes % MIN_IN_H;
		printf("This is %d h %d min\n", hours, minutes);
		printf("Enter another time in minutes (<=0 to escape): ");
		scanf("%d", &minutes);
	}
	printf("\tThe task is now complete!\n");
}

void doTask2(void)
{
	int32_t value, stopValue;

	printf("Enter integer value: ");
	scanf("%d", &value);
	stopValue = value + 10;

	while (value <= stopValue)
	{
		printf("%d ", value++);
	}
	printf("\tThe task is now complete!\n");
}

void doTask3(void)
{
	const int32_t DAYS_IN_WEEK = 7;
	int32_t days;

	printf("Enter the amount of days: ");
	scanf("%d", &days);

	while (days > 0)
	{
		printf("%d days is %d weeks and %d days\n", days, days / DAYS_IN_WEEK, days % DAYS_IN_WEEK);
		printf("Enter another amount of days (<=0 to escape): ");
		scanf("%d", &days);
	}
	printf("\tThe task is now complete!\n");
}

void doTask4(void)
{
	const float CM_IN_FT = 30.48, IN_IN_FT = 12;
	float heightInCM, heightIN;
	int32_t heightFT;
	
	printf("Enter height in CM: ");
	scanf("%f", &heightInCM);

	while (heightInCM > 0)
	{
		heightFT = (int32_t) (heightInCM / CM_IN_FT);
		heightIN = (heightInCM / CM_IN_FT - (float) heightFT) * IN_IN_FT;
		printf("%.1f cm = %d ft %.1f in\n", heightInCM, heightFT, heightIN);
		printf("Enter another height in CM (<=0 to escape): ");
		scanf("%f", &heightInCM);
	}
	printf("\tThe task is now complete!\n");
}

void doTask5(void)
{
	int32_t count, sum, days;

	printf("This task calculates how much money you will have, "
			"if you have $1 at day 1, $2 at day 2, $3 at day 3, etc.\n");
	printf("Enter the amount of days: ");
	scanf("%d", &days);

	count = sum = 0;
	while (count++ < days)
	{
		sum = sum + count;
	}
	printf("In %d days you will have $%d\n", days, sum);
	printf("\tThe task is now complete!\n");
}

void doTask6(void)
{
	int32_t count, sum, days;

	printf("This task calculates how much money you will have, "
		"if you have $1 at day 1, $4 at day 2, $9 at day 3, etc.\n");
	printf("Enter the amount of days: ");
	scanf("%d", &days);

	count = sum = 0;
	while (count++ < days)
	{
		sum = sum + count*count;
	}
	printf("In %d days you will have $%d\n", days, sum);
	printf("\tThe task is now complete!\n");
}

void doTask7(void)
{
	double value;

	printf("Enter double value: ");
	scanf("%lf", &value);
	displayCube(value);
	printf("\tThe task is now complete!\n");
}

void doTask8(void)
{
	int32_t dividend, divisor, rem;

	printf("This task calculates the remainder of Euclidean division\n");
	printf("Enter divisor: ");
	scanf("%d", &divisor);
	printf("Enter dividend: ");
	scanf("%d", &dividend);

	while (dividend > 0)
	{
		rem = dividend % divisor;
		printf("%d %% %d = %d\n", dividend, divisor, rem);
		printf("Enter another dividend (<=0 to escape): ");
		scanf("%d", &dividend);
	}
	printf("\tThe task is now complete!\n");
}

void doTask9(void)
{
	double temperatureF;
	int32_t whileCondition;
	char x;

	printf("This task converts temperature to other measurement systems\n");
	printf("Enter temperature in Fahrenheit: ");
	whileCondition = scanf("%lf", &temperatureF);

	while (whileCondition == 1)
	{
		Temperatures(temperatureF);
		printf("Enter anoter temperature in Fahrenheit (non-numerical input to escape): ");
		whileCondition = scanf("%lf", &temperatureF);
		int i = 0;
	}

	/* After (whileCondition = 0) invalid data is still left in the stream
	We have to read and discard the data from the stream before we can enter more data (taskNum in main)
	Thus we use an empty while: */
	while ((x = getchar()) != '\n'); 

	printf("\tThe task is now complete!\n");
}

void displayCube(double x)
{
	double cube = x * x * x;
	printf("Cube value of %.2f equals %.6f\n", x, cube);
}

void Temperatures(double temperatureF)
{
	const double multiplierC = 5.0 / 9.0, subtrahendC = 32.0, addendK = 273.16;
	double temperatureC, temperatureK;

	temperatureC = multiplierC * (temperatureF - subtrahendC);
	temperatureK = temperatureC + addendK;
	printf("%.2f deg F = %.2f deg C = %.2f deg K\n", temperatureF, temperatureC, temperatureK);
}
