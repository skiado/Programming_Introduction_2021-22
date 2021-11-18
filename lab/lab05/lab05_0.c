//Random integers
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 20
#define RAND_LIMIT 10

int main(){
	int m[20];
	
	for(int i = 0; i < ARRAY_LEN; i++){
		m[i] = rand() % RAND_LIMIT;
	}
	for(int i = 0; i < ARRAY_LEN; i++){
		printf("%i, ",m[i]) ;
	}
	printf("\n");
	return 0;
}

