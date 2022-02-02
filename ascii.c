/*
Matthew Huizar
Description: This C program will prompt the user to enter an ASCII character and then print out the decimal, hexidecimal,
and binary values.
*/
#include <stdio.h>

int main() 
{
	unsigned char var;	// Holds an ASCII printable character
	int temp;

	printf("Enter an ASCII character: ");
	scanf("%c", &var);

	printf("The ASCII value of %c is: ", var);
	printf("\ndec -- %d \n", var);	// Print the decimal value
	printf("hex -- %x \n", var);	// Print the hexidecimal value
	printf("bin -- ");	// Print the binary value

	for( int i=7; i>=0; i-- )	// Decrement the control value from 7 down to 0
	{
		temp = var >> i;	// Use the right shift operator to shift the bits of var by i
		if( temp & 1 ) 
		{
			printf("1");
		}
		else 
		{
			printf("0");
		}
	}
	printf("\n");
}
