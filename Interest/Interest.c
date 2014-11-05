//Made by Austin DeLauney

#include <stdio.h>

//Constants within the program
#define PRINCIPAL	1000.00 //Inistial Deposite
#define INTREREST	.1 //10% interest
#define PERIOD		10 //How many years the interest accumulates over

int main()
{
	scanf("Principal amount of money: %&f")

	int 	year;	//Year of period
	float		sum;	//Total amount 

	sum 	= PRINCIPAL;
	year 	= 0;

	do
	{
		printf("Year: %i, Sum: %.2f\n", year, sum);
		sum = (sum*INTREREST) + sum;
		year += 1;
	} while (year <= PERIOD);
}