// Πρόγραμμα μετατροπής srring σε int
#include <stdio.h>

int strToInt (const char string[]){
	int intValue, result = 0;
	
	for (int i = 0; string[i] >= '0' && string[i] <= '9'; i++){
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}
	return result;
}

int main (void){
	char num[5];
	
	
	printf ("%i\n", strToInt("245"));
	printf ("%i\n", strToInt("100") + 25);
	printf ("%i\n", strToInt("13x5"));
	printf("Δώσε έναν ακέραιο με ψηφία 1-4 :");
	scanf("%s",num);
	printf ("%i\n", strToInt(num));
	return 0;
}

/* gcc lecture08_4.c -o lecture08_4  */
