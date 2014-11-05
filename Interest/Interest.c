//Made by Austin DeLauney

//Calculates principal for original amount of principal, interest, and period

#include <stdio.h>

int main()
{
	int	year = 0,	//Year of period
		period;		//Amount of years the interest accumulates over

	float	interest,	//Interest that will be given 
		principal;	//Original amount of money depositied

	printf("Enter the interest rate, period, and principal: "); //Asks for information

	if(scanf("%f %i %f", &interest, &period, &principal) == 3) //Gets information from user
	{
		if(interest <=0)
		{
			printf("Error in input! Interest cannot be below or equal to 0!");
			return 1;
		}

		if(period <= 0)
		{
			printf("Error in input! Period cannot be below or equal to 0!");
			return 1;
		}

		printf("Year\tTotal at %.2f%%\n\n", interest*100); //Print beginning of table

		for(year = 0; year < period; year++) //Prints amount of money after each year
		{
			printf("%5d\t$ %10.2f\n", year+1, principal);
			principal += principal * interest;
		}
	}

	else
		printf("Unknown error in input! Quitting!");

	return 0;
}

/**
	RETURN CODE:
					0: EXECUTED SUCCESFULLY
					1: ERROR IN INPUT
**/