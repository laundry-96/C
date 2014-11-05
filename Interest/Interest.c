//Made by Austin DeLauney

#include <stdio.h>

int main()
{
	int 	year = 0,	//Year of period
		period;		//Amount of years the interest accumulates over

	float	interest,	//Interest that will be given 
		principal;	//Original amount of money depositied

	printf("Enter the interest rate, period, and principal: "); //Asks for information

	if(scanf("%f %i %f", &interest, &period, &principal) == 3) //Gets information from user
	{
		printf("Year\tTotal at %.2f%%\n\n", interest*100); //Print beginning of table

		for(year = 0; year < period; year++) //Prints amount of money after each year
		{
			printf("%5d\t$ %10.2f\n", year+1, principal);
			principal += principal * interest;
		}
	}
}