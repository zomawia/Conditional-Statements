// Zomawia Sailo
// zomawia@gmail.com
// test

#include <iostream>

int main()
{
	int iList1 = 0,
		iList2 = 0,
		iList3 = 0,
		iList4 = 0,
		iList5 = 0,
		iSum = 0,
		iSwap1 = 0,
		iSwap2 = 0,
		iSwap3 = 0,
		iSwap4 = 0,
		iSwap5 = 0;
	
	// Accept input
	printf("This program will take five numbers and order them in ascending or descending order depending on the sum. ");
	printf("Type in the 5 numbers and press ENTER.\n>>");

	//Input
	scanf_s("%d", iList1);
	iSwap1 = iList1;

	//2nd Number, checking for greater number
	scanf_s("%d", iList2);
	if (iList1 > iList2)
	{
		iSwap1 = iList2;
		iSwap2 = iList1;
	}

	//3rd number, cross checking 1 and 2
	scanf_s("%d", iList3);
	if (iList3 < iSwap1)
	{
		iSwap3 = iSwap2;
		iSwap2 = iSwap1;
		iSwap1 = iList3;
	}
	else if (iList3 < iSwap2)
	{
		iSwap3 = iSwap2;
		iSwap2 = iList3;
	}
	else
	{
		iSwap3 = iList3;
	}

	//4th number, cross check swap 1, 2, 3
	scanf_s("%d", iList4);
	if (iList4 < iSwap1)
	{
		iSwap4 = iSwap3;
		iSwap3 = iSwap2;
		iSwap2 = iSwap1;
		iSwap1 = iSwap4;
	}
	else if (iList4 < iSwap2)
	{
		iSwap4 = iSwap3;
		iSwap3 = iSwap2;
		iSwap
	}









	// Calculate Sum
	iSum = iList1 + iList2, iList3, iList4, iList5;

	// Ascending Sort (Sum = Positive)
	if (iSum > 0)
	{

	}
	// Descending Sort (Sum = Negative)
	else if (iSum < 0)
	{

	}

	// No Sort (Sum = 0)
	else
	{ }

	system("pause");
}