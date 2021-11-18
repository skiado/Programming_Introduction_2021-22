// Συνάρτηση που επιστρέφει τη μικρότερη τιμή ενός πίνακα ακεραίων
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ARRAY_LEN 20
#define RAND_LIMIT 100

int minimum (int values[ARRAY_LEN]){
	int minValue, i;
	minValue = values[0];
	
	for ( i = 1; i < ARRAY_LEN; ++i ){
		if ( values[i] < minValue ){
			minValue = values[i];
		}
	}
	return minValue;
}

int main (void){
	int scores[ARRAY_LEN], i, minScore;

	srand(time(0)); // Χρήση του ρολογιού για αρχικοποίηση της rand()	
	for ( i = 0; i < ARRAY_LEN; ++i ){
		scores[i] = rand() % RAND_LIMIT;
		printf("%i ",scores[i]);
	}
	minScore = minimum (scores);
	printf ("\nΗ ελάχιστη τιμή είναι: %i\n", minScore);
	return 0;
}

/* gcc lecture06_6b.c -o lecture06_6b */
