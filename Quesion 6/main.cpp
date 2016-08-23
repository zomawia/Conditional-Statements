// Zomawia Sailo <zomawia@gmail.com>

//6. Write a program that accepts from the user two numbers and a mathematical operation
//character(+, -, *, / , %).Perform the appropriate maths based on which character is input.

#include <iostream>

int main()
{
	int iNum1 = 0, iNum2 = 0, iAnswer = 0;
	char chMath = 0;

	// prompt for numbers
	printf("This program will take two numbers and do the math depending on the math operation character inputted. ");
	printf("Type in the math equation. ( e.g.: 522 / 99 )\n>>");

	scanf_s("%d %c %d", &iNum1, &chMath, 1, &iNum2);

	// find the math operator
	switch (chMath)
	{
	case '+':
		iAnswer = iNum1 + iNum2;
		printf("");
		break;
	case '-':
		iAnswer = iNum1 - iNum2;
		printf("");
		break;
	case '/':
		printf("");
		iAnswer = iNum1 / iNum2;
		break;
	case '*':
		printf("");
		iAnswer = iNum1 * iNum2;
		break;
	case '%':
		printf("");
		iAnswer = iNum1 % iNum2;
		break;
	default:
		printf("Invalid input");
		break;
	}

	printf("\nThe equation of %d %c %d = %d \n\n", iNum1, chMath, iNum2, iAnswer);

	system("pause");
}