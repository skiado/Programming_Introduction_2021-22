//Άσκηση 4
#include <stdio.h>

#define ARRAY_LEN 10

int main(){
	int m[10][10];
	
	for(int i = 0; i < ARRAY_LEN; i++){
		for(int j = 0; j < ARRAY_LEN; j++){
			if (i == j){
				m[i][j] = 1;
			}
			else {
				m[i][j] = 0;
			}
		}
	}
	for(int i = 0; i < ARRAY_LEN; i++){
		for(int j = 0; j < ARRAY_LEN - 1; j++){
			printf("%i , ",m[i][j]);
		}
		printf("%i \n",m[i][ARRAY_LEN-1]);
	}
	return 0;
}
/* gcc lab05_4.c -o lab05_4 */
