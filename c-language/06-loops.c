#include <stdio.h>

int main() {
    
    printf("while loop\n");
    int index = 0;
    while(index < 5) {
        printf("%d\n", index);
        index++;
    }
    

    
    printf("for loop\n");
    for(int index = 0; index < 5; index++) {
        printf("%d\n", index);
    }


    
    printf("value of index = %d\n", index);
    printf("do-while loop\n");
    do {
        printf("%d\n", index);
        index--;
    } while (index > 0);


    return 0;
}