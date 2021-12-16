// Πρόγραμμα εμφάνισης χαρακτήρων μέχρι το τέλος του αρχείου
#include <stdio.h>

int main (void){
	int c;
	
	while ( (c = getchar ()) != EOF ){
		putchar (c);
	}
	return 0;
}

/* gcc lecture10_1.c -o lecture10_1  */
