#include<stdio.h>

int main(){
    char c;
    
    printf("Enter a character : ");
    scanf("%c" , &c);
    printf("\nASCII value of %c = %d \n",c,c);

    return 0;
}

/* gcc char01.c -o char01 */
