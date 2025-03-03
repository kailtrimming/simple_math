/** \file simple_math_test_td.c
    \brief a toy example of math library
	\author Kail Trimming

*/

#include <stdio.h>
#include "simple_math.h"

int main() {
	
	int a = 6;
	int b = 2;
	int c;
	
	float average;
	
	average = mean(a,b);
	
	printf("\nThe mean of %d and %d is: %f" ,a,b,average);
	
	c = max(a,b);
	
	printf("\nThe max value between %d and %d is: %d" ,a,b,c);
	
	return 0;
}