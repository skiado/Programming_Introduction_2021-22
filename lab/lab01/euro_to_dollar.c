#include <stdio.h>

int main(void) {
	double euro,dollar;
		
	printf("Δώσε το ποσό σε ευρώ: ");
	scanf("%lf",&euro);
	dollar = euro * 1.18;
    printf("%.2lf euros = %.2lf dollars\n",euro,dollar);
    
    return 0;
}

/* gcc euro_to_dollar.c -o e_to_d  */
