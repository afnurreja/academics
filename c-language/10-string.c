#include <stdio.h>
#include <string.h>

// in C, a stirng is an array of characters ending with a special null character '\0'

int main() {
    
    char str[3] = {'m', 'y', '\0'};
    printf("%s\n", str);


    char hello[] = "Hello"; // internally stored - H e l l o \0
    printf("%s\n", hello);


    char name[20];
    printf("Enter your name : ");
    scanf("%19s", name); // 19 before s means scanf will take at most 19 chars

    printf("Hello, %s\n", name);
    printf("Length = %zu\n", strlen(name)); // %zu for size_t. value.

    return 0;
}