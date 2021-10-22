#include <math.h>
#include <stdio.h>

int main(void) {
	int a;
	double b;
	
	a = 425;
	b = sqrt(a);
    printf("Η τετραγωνική ρίζα του %d είναι %.2lf\n",a,b);
}

/* gcc var01.c -o var01 -lm */
