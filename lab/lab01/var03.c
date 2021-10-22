// Πρόγραμμα που εναλλάσσει τις τιμές δύο μεταβλητών 
#include <stdio.h>

int main(void) {
	int a,b,temp;
		
	printf("Δώσε ακέραια τιμή στο a: ");
	scanf("%d",&a);
	printf("Δώσε ακέραια τιμή στο b: ");
	scanf("%d",&b);
	temp = a;
	a = b;
	b = temp;
    printf("a = %d b = %d\n",a,b);
}

/* gcc var03.c -o var03  */
