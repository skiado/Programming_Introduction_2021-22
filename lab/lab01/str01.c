#include <stdio.h>

int main() {
    char name[20];
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);
    return 0;
}

/* gcc str01.c -o str01 */
