// Συνάρτηση που συνενώνει (concatenate) δύο πίνακες χαρακτήρων
#include <stdio.h>

void concat (char result[], const char str1[], const char str2[]);

int main (void) {
	const char s1[] = { "Test " };
	const char s2[] = { "works." };
	char s3[40];
	const char s4[] = { "Πηνελόπη " };
	const char s5[] = { "Δέλτα" };
	
	concat (s3, s1, s2);
	printf ("%s\n", s3);
	concat (s3, s4, s5);
	printf ("%s\n", s3);
	return 0;
}
// Συνάρτηση που συνενώνει (concatenate) δύο πίνακες χαρακτήρων
void concat (char result[], const char str1[], const char str2[]){
	int i, j;
	
	// αντιγραφή str1 στο result
	for (i = 0; str1[i] != '\0'; i++){
		result[i] = str1[i];
	}
	// αντιγραφή str2 στο result
	for ( j = 0; str2[j] != '\0'; j++ ){
		result[i + j] = str2[j];
	}
	//Τερματιμός του αποτελέσματος με null character
	result [i + j] = '\0';
}

/* gcc lecture08_3.c  -o lecture08_3 */
