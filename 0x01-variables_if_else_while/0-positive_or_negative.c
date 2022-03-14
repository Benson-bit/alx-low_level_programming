#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n;
                                                            
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
=======

#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main entry point
* 
* Return:always 0(sucess)
*/
int main(void)
{
	int n;
        
        srand(time(0));
        n = rand() - RAND_MAX / 2;
       /* your code goes there */
        if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
 	if (n < 0)
                printf("%d is negative\n", n);
        return (0);
>>>>>>> 8eefa7b98f7c04281ad6ccd1d6ff871c56987b7e
}
