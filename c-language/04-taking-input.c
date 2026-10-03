#include <stdio.h>

int main() {
    
    int num;
    printf("Enter a number : ");
    
    scanf("%d", &num);
    printf("You entered %d as input\n", num);



    // Type casting
    printf("After converting into float %f\n", (float)num );

    return 0;
}