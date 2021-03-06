/**
 * Determines if a user input number is prime or not.
 * @author Zorian Thornton
 * This code may need some data type readjusting down the line to
 * accomodate for larger user input. (64-bit integers for example).
**/
#include<stdio.h>
#include<stdlib.h>

// Function header for isPrime().
int isPrime(int n);

/**
 * The main method that takes user input and returns if the number
 * is prime or not.
**/
int main()
{
	// Allocate memory for the user.
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);
	if (isPrime(input) == 0)
	{
		printf("%d is prime.\n", input);
	}//end if
	else
	{
		printf("%d is not prime.\n", input);
	}//end else
	return 0;

}//end main

/**
 * Determines if a given number is prime.
 * @param n	The number being evaluated.
 * @retrun 0 if the number is prime, 1 if it is not.
 * Efficency: This soltion runs in log time. So the speed of this
 * algorithim is pretty fast, but may take a while if the prime number is very big.
**/
int isPrime(int n)
{
	if (n <= 1)
	{
		return 1;
	}//end if
	if (n == 2)
	{
		return 0;
	}//end if

	// See if the number is prime.
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 1; // Is not prime.
		}//end if
	}//end for
	return 0; // Is prime.
}//end isPrime
