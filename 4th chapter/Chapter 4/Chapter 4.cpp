#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <string.h>
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
	char name[15], surname[15];
	printf("Enter your name and surname: ");
	scanf("%s %s", name, surname);

	printf("You are %s %s\n", surname, name);
}

void doTask2(void)
{
	char name[15];
	printf("Enter your name: ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", strlen(name)+3, name);
}

void doTask3(void)
{
	float value;
	printf("Enter float value: ");
	scanf("%f", &value);

	printf("Input is %.1f or %.1e\n", value, value);
	printf("Input is %+.3f or %+.3e\n", value, value);
}

void doTask4(void)
{
	char name[15];
	float heightInCM;
	printf("Enter your name and height in centimeters: ");
	scanf("%s %f", name, &heightInCM);

	printf("%s, your height is %.2f meters\n", name, heightInCM/100.0);
}

void doTask5(void)
{
	float downloadSpeed, fileSize, downloadTime;
	printf("Enter download speed (in megabits per sec) and file size (in megabytes): ");
	scanf("%f %f", &downloadSpeed, &fileSize);

	downloadTime = fileSize * 8.0 / downloadSpeed;
	printf("Download of a %.2f MB file at a speed of %.2f Mbps will take %.2f sec(-s)\n",
		fileSize, downloadSpeed, downloadTime);
}

void doTask6(void)
{
	char name[15], surname[15];
	int8_t nameLength, surnameLength;
	printf("Enter your name and surname: ");
	scanf("%s %s", name, surname);

	nameLength = strlen(name);
	surnameLength = strlen(surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", nameLength, nameLength, surnameLength, surnameLength);
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", nameLength, nameLength, surnameLength, surnameLength);
}

void doTask7(void)
{
	float floatValue;
	double doubleValue;
	floatValue = 1.0 / 3.0;
	doubleValue = 1.0 / 3.0;
	
	printf("float: %.4f, double: %.4f\n", floatValue, doubleValue);
	printf("float: %.12f, double: %.12f\n", floatValue, doubleValue);
	printf("float: %.16f, double: %.16f\n", floatValue, doubleValue);
	printf("Max precision for float: %d, max precision for double: %d\n", FLT_DIG, DBL_DIG);
}

void doTask8(void)
{
	float numMiles, numGallons, numLiters, numKilometers, measureUSA, measureEU;
	const float gallonsToLiters = 3.785, milesToKilometers = 1.609;
	printf("Enter the amount of miles traveled and the amount of gallons of gas spent: ");
	scanf("%f %f", &numMiles, &numGallons);

	numLiters = gallonsToLiters * numGallons;
	numKilometers = milesToKilometers * numMiles;
	printf("You traveled %.1f kilometers and spent %.1f liters of gas\n", numKilometers, numLiters);

	measureUSA = numMiles / numGallons;
	measureEU = numLiters / (100 * numKilometers);
	printf("In American system: %.1f miles per gallon\n", measureUSA);
	printf("In European system: %.1f liters per 100 km\n", measureEU);
}
