// Zomawia Sailo <zomawia@gmail.com>
// 2. Write a program that asks the user for two numbers and then display the larger number to
// the console.


#include <iostream>

int main()
{
	int iNum1 = 0, iNum2 = 0;
	int iLarge = 0;

	// prompt for numbers
	printf("This program will display the larger number of two numbers a lot of times.\n");
	printf("Type in two numbers separated by a space.\n\n>>");

	scanf_s("%d %d", &iNum1, &iNum2);
		
	// find the larger number
	iLarge = (iNum1 > iNum2) ? iNum1 : iNum2;

	printf("\nThe larger number is: %d\n\n", iLarge);
	
	system("pause");
}