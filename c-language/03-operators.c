#include <stdio.h>

int main() {
    
    // Arithmetic Operators :  +, -, /, *, %, ++, --

    int n = 1;
    printf("Addition = %d\n", 10 + 2);
    printf("Subtraction = %d\n", 10 - 2);
    printf("Multiplication = %d\n", 10 * 2);
    printf("Division = %d\n", 10 / 2);
    printf("Reminder = %d\n", 10 % 2);
    printf("Pre-increment = %d\n", ++n);
    printf("Post-increment = %d\n", n++);



    // Relational Operators : ==, !=, >, <, >=, <=
    // Returns true (1) or false (0)

    printf("%d\n", 5 == 4);
    printf("%d\n", 5 != 4);



    // Logical Operators : &&, ||, !
    // combine or compare conditions to produce a true (1) or flase (0) result.

    printf("%d\n", 0 && 1);
    printf("%d\n", 0 && 0);
    printf("%d\n", 0 || 1);
    printf("%d\n", !1);
    printf("%d\n", !1);



    // Bitwise Operators : &, |, ^, ~, <<, >>
    // Perform operation on bits
    // 60 - 00111100
    // 14 - 00001110
    // &  - 00001100 - 12
    // |  - 00111110 - 62
    
    printf("%d\n", 60 & 14);
    printf("%d\n", 60 | 14);



    // Assignment Operators : =, +=, -=, /=, %=
    int num = 1;
    num += 9;
    printf("num is %d\n", num);



    // Misc Operators : & (get variable address), * (value at address), ? : (conditional statement)

    return 0;
}
