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

int main()
{
	uint32_t taskNum;
	printf("Which task is to be completed?\n");
	scanf("%d", &taskNum);

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
	default:
		printf("Incorrect input, shutting down\n");
		break;
	}

	return 0;
}

void doTask1(void)
{
	float pisya = 1.234;
	printf("%0.2f\n", pisya);
}

void doTask2(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask3(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask4(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask5(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask6(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask7(void)
{
	printf("Incorrect input, shutting down\n");
}

void doTask8(void)
{
	printf("Incorrect input, shutting down\n");
}
