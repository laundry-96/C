//Made by Austin DeLauney
//Program about arrays, and reads integers from a file or keyboard, (supposed to be file)

#include <stdio.h>

#define MAXVALS 100

int main()
{
	int	numvals = 0,
		pos,
		table[MAXVALS],
		value = 0;

	while (numvals < MAXVALS && scanf("%d", &value) != EOF) //While there is room in the array, and there are values to input
	{
		for (pos = numvals; pos > 0 && value < table[pos - 1]; pos--) //For each value in the array that has an integer, and until the number is found for insertion
		{
			table[pos] = table[pos - 1]; //Shift each integer down 1
		}

		table[pos] = value; //Insert the value
		numvals++; //Increase numvals
	}

	for(int i = 0; i < numvals; i++) //Print list
		printf("%d\n", table[i]);

	return 0;
}