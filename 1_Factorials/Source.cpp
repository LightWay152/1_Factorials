/*Tính giai thừa của một số nguyên*/

#include<stdio.h>
#include<conio.h>

int Factorials(int n) // by Recursion
{
	if (n <= 2)
		return n;
	else // n>2
		return n*Factorials(n - 1);
}

void main()
{
	int n;
	char choose;

	printf("\n --- Factorials---");
	do
	{
		printf("\n\n Enter the integer n: ");
		scanf("%d", &n);

		int S = Factorials(n);

		printf("\n Factorial of %d is: %d", n, S);
		printf("\n\n Press y to continue or any keyboard to exit: ");

		choose = getch();
	} while (choose == 'y');

}