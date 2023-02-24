
Pull requests
Issues
Codespaces
Marketplace
Explore
@Amaiikah
Raniaelmorabet /
alx-low_level_programming
Public

Fork your own copy of Raniaelmorabet/alx-low_level_programming

Code
Issues
Pull requests
Actions
Projects
Security

    Insights

alx-low_level_programming/0x04-more_functions_nested_loops/9-fizz_buzz.c
@Raniaelmorabet
Raniaelmorabet Fizz-Buzz
Latest commit cac5058 Feb 23, 2023
History
1 contributor
30 lines (27 sloc) 410 Bytes
#include <stdio.h>
#include "main.h"

/**
  * main - the entry of the program
  *
  * Return: always 0
  */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
