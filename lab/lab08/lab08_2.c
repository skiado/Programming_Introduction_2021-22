//Άσκηση 2
# include <stdio.h>

void substring(char source[],int start, int count, char result[]){
	int i;
	
	for(i = 0; i < count ; i++){
		result[i] = source[start + i];
	}
	result[i+1] = '\0';
}

int main(){
	char s_full[40],s_sub[40];
	int start,count;
	
	printf("Δώσε το string (λατινικό αλφάβητο) : ");
	scanf("%s",s_full);
	printf("Δώσε το σημείο εκκίνησης του τμήματος και το μέγεθός του χωρισμένα με κενό : ");
	scanf("%i %i",&start, &count);
	substring(s_full,4,3,s_sub);
	printf("%s \n",s_sub);
	return 0;
}

/* gcc lab08_2.c -o lab08_2  */

