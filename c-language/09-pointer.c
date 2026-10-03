#include <stdio.h>

// Pointer : special variable that stores address of other variable.

// To get address of a variable we use addressof operator(&).

// Dereference operator (*) : give the value at the given address.

int main() {
    
    int n = 10;
    printf("n = %d\n", n);

    int* ptr = &n; // now ptr stores the address of variable n.
    printf("address of n variable = %d\n", ptr);
    printf("value at the address (value of n) = %d\n", *ptr);
    *ptr = 20;
    printf("after updating using ptr, n = %d\n", n);



    return 0;
}