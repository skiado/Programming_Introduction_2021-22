#include <math.h>
#include <stdio.h>

int main(void) {
	int a;
	double b;
	
	printf("Δώσε έναν ακέραιο αριθμό: ");
	scanf("%d",&a);
	b = sqrt(a);
    printf("Η τετραγωνική ρίζα του %d είναι %.2lf\n",a,b);
}

/* gcc var02.c -o var02 -lm */
