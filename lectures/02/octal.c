#include <stdio.h>

int main(void) {
	int i = 027;
    printf("Το i σε οκταδική μορφή είναι %o.\n",i);
    printf("Το 117 σε οκταδική μορφή είναι %#o.\n",i);
    printf("Το i σε δεκαδική μορφή είναι %i.\n",i);
}

/* gcc lecture02_2.c -o lecture02_2 */
