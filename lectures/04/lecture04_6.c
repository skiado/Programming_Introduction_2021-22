// Πρόγραμμα υλοποίησης συνάρτησης προσήμου
#include <stdio.h>
int main (void) {
	int number, sign;
	
	printf ("Please type in a number: ");
	scanf ("%i", &number);
	
	if ( number < 0 ){
		sign = -1;
	}
	else if ( number == 0 ){
		sign = 0;
	}
	else {
	// Πρέπει να είναι θετικός
		sign = 1;
	}
	printf ("Sign = %i\n", sign);
	return 0;
}

/* gcc lecture04_6.c -o lecture04_6 */
