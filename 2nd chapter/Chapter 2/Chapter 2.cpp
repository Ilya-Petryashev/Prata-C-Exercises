#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

void doTask1(void);
void doTask2(void);
void doTask3(void);
void doTask4(void);
void doTask5(void);
void doTask6(void);
void doTask7(void);
void doTask8(void);

void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

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
	printf("Ilya Petryashev\n");
	printf("Ilya\nPetryashev\n");
	printf("Ilya ");
	printf("Petryashev\n");
}

void doTask2(void)
{
	printf("My name is Ilya Petryashev\n");
	printf("My adress is Russia, Saint-Petersburg, prospect Nepokorennyh, 8/2\n");
}

void doTask3(void)
{
	uint32_t ageInYears = 21, ageInDays;
	ageInDays = 365 * ageInYears;
	printf("I am %d years old, which is %d days\n", ageInYears, ageInDays);
}

void doTask4(void)
{
	jolly();
	jolly();
	jolly();
	deny();
}

void doTask5(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");
}

void doTask6(void)
{
	uint32_t toes = 10;
	printf("If toes = %d, than its doubled value is %d, and its square is %d\n", toes, 2 * toes, toes * toes);
}

void doTask7(void)
{
	smile();
	printf(" ");
	smile();
	printf(" ");
	smile();
	printf("\n");
	smile();
	printf(" ");
	smile();
	printf("\n");
	smile();
	printf("\n");
}

void doTask8(void)
{
	printf("Start:\n");
	one_three();
	printf("Alright!\n");
}

void jolly(void)
{
	printf("He's a funny fella!\n");
}

void deny(void)
{
	printf("No one can deny that!\n");
}

void br(void)
{
	printf("Brasil, Russia");
}

void ic(void)
{
	printf("Indonesia, China");
}

void smile(void)
{
	printf("Smile!");
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}