#include <stdio.h>

int main() {
    
    //if-else
    int age = 18;
    if(age < 18) {
        printf("You can not drive\n");
    } else {
        printf("You can drive.\n");
    }



    // if-else-if
    if (age < 18) {
        printf("You can not drive\n");
    } else if(age >=18 && age <= 21) {
        printf("You are banned from driving\n");
    } else {
        printf("You can drive but drive carefully\n");
    }



    // ? :
    char adult = age >= 18 ? 'Y' : 'N';
    printf("%c\n", adult);

    return 0;
}