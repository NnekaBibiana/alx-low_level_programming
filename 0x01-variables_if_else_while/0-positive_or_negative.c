#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- determine if a number is positive or negative
 * description- program will assign a random number to the variable each time
 *
 * return: if true print zero if not return non zero
 */
int main(void)
{
		int n;


				
			srand(time(0));

				n = rand() - RAND_MAX / 2;

			       if (n==0)
				       printf("%d is zero\n", n);
			       else if (n<0)
				       printf("%d is negative\n", n);
			       else 
				       printf("%d is positive\n",n);
		       	       return (0);

}
