#include <stdio.h>


// int, float, char
// dataType variableName = value;

int main() {
    int num; // variable declaration
    num = 30; // variable initialization
    int ten = 10; // variable declaration and initialization

    
    int n = 10; // 2 to 4 bytes
    long integer1 = 34; // 4 bytes
    short integer2 = 3; // 2 bytes

    float f = 13.6; // 4 bytes - 6 decimal precision
    double float1 = 7.45; // 8 bytes - 15 decimal places precision
    long double float2 = 7.7809857; // 10 bytes - 19 decimal places precision

    char ch = 'a'; // 1 byte


    // printing values
    printf("integer %d\n", n);
    printf("float %f\n", f);
    printf("character %c\n", ch);


    // sizeof()
    printf("size of a int = %d\n", sizeof(int));
    printf("size of a float = %d\n", sizeof(float));
    printf("size of a char = %d\n", sizeof(char));


    // Updating variable value
    int number = 40;
    printf("number before update %d\n", number);
    number = 30;
    printf("number after update %d\n", number);


    // const keyword (assign constant value -> can't change)
    const int hundred = 100;

    
    return 0;
}