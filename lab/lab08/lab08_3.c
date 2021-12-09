// Άσκηση 3
# include <stdio.h>

int s_count(const char str[], char ch){
	int c = 0;
	
	for(int i =0; str[i] ; i++){
		if (str[i] == ch){
			c++;
		}
	}
	return c;
}

int main(){
	char s[50];
	char c;
	
	printf("Δώσε το string (μέχρι 50 λατινικούς χαρακτήρες):");
	scanf("%s",s);
	printf("Δώσε τον χαρακτήρα για έλεγχο : ");
	scanf(" %c",&c);
	
	printf("Ο χαρακτήρας %c εμφανίζεται %i φορές.\n",c,s_count(s,c));
	return 0;
}

/* gcc lab08_3.c -o lab08_3  */
