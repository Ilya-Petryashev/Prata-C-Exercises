#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <float.h>

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
	int16_t integerValueOverflow = INT16_MAX + 2;			
	double doubleValueOverflow = DBL_MAX * 2.0;
	float floatValueLoss = 0.123432 / 10.0;
	printf("32767 + 2 = %d - this is integer value overflow\n", integerValueOverflow);
	printf("1.7976931348623158e+308 * 2 = %f - this is double value overflow\n", doubleValueOverflow);
	printf("0.123432 / 10 = %f - this is the loss of significance of float value\n", floatValueLoss);
}

void doTask2(void)
{
	uint32_t symbol; // when using char: Run-Time Check Failure #2 - Stack around the variable 'symbol' was corrupted.
	printf("Enter the ASCII code (from 33 to 126):\n");
	scanf("%d", &symbol);
	printf("ASCII code %d corresponds to the symbol \'%c\'\n", symbol, symbol);
}

void doTask3(void)
{
	printf("\a");
	printf("Frightened by a sudden sound, Vicky screamed:\n");
	printf("\"For the sake of all stars, what was that?!\"\n");
}

void doTask4(void)
{
	float value;
	printf("Enter the float value: ");
	scanf("%f", &value);
	printf("Decimal format: %f\n", value);
	printf("Exponential format: %e\n", value);
	printf("Binary-exponential format: %a\n", value);
}

void doTask5(void)
{
	uint32_t age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You are %f seconds old\n", age * 3.156e7);
}

void doTask6(void)
{
	int32_t volumeInQuarts;
	printf("Enter the volume of water in quarts: ");
	scanf("%d", &volumeInQuarts);
	printf("There are approximately %f molules in this volume of water\n", volumeInQuarts * 950 / 3e-23);
}

void doTask7(void)
{
	int32_t heightInCM;
	printf("Enter your height in centimeters: ");
	scanf("%d", &heightInCM);
	printf("You are %f inches high\n", heightInCM / 2.54);
}

void doTask8(void)
{
	float volumeInPints, volumeInCups, volumeInOz, volumeInTablespoons, volumeInTeaspoons;
	printf("Enter the volume in cups: ");
	scanf("%f", &volumeInCups);
	volumeInPints = volumeInCups / 2.0;
	volumeInOz = volumeInCups * 8.0;
	volumeInTablespoons = volumeInOz * 2.0;
	volumeInTeaspoons = volumeInTablespoons * 3.0;
	printf("%f cup(-s) is %f pint(-s), %f oz., %f tbsp. and %f tsp.\n", volumeInCups, volumeInPints, volumeInOz,
		volumeInTablespoons, volumeInTeaspoons);
}
