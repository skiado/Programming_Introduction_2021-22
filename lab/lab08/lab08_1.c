//Άσκηση 1
# include <stdio.h>

struct person {
	char name[41];
	char tel[11];
};

struct person input_person(){
	struct person p;
	
	printf("Δώσε το όνομα : ");
	scanf("%s",p.name);
	printf("Δώσε το τηλέφωνο : ");
	scanf("%s",p.tel);
	return p;
}

int main(){
	struct person per[5];
	
	for(int i = 0; i < 5; i++){
		per[i] = input_person();
	}
	printf("Όνομα : Τηλέφωνο  \n");
	printf("-----------------------------------\n");
	for(int i = 0; i < 5; i++){
		printf("%s : %s  \n",per[i].name,per[i].tel);
	}
	return 0;
}

/* gcc lab08_1.c -o lab08_1  */

