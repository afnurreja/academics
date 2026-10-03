#include <stdio.h>

int main() {

    // Syntax - dataType arrayName[size];
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Accessing array element. index starts from 0
    printf("%d\n", arr[3]);


    // creating a character array by taking inputs from user.
    int sz = 5;
    char chars[sz];
    // taking inputs
    for (int i = 0; i < sz; i++) {
        printf("Enter the char for index %d = ", i);
        // Add a space before %c to ignore whitespace/newline
        scanf(" %c", &chars[i]);
    }

    printf("\n");
    //now accessing array elements
    for (int i = 0; i < sz; i++) {
        printf("The char at index %d = %c\n", i, chars[i]);
    }

    return 0;
}