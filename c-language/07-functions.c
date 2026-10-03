#include <stdio.h>

// int globalVar = 01;

// dataType functionName(parameterType parameterName) {
//       return valueOfTypeDataType;
// }

int add(int a, int b) {
    return a + b;
}

float avg(float a, float b) {
    return (a + b)/2;
}

int main() {
    
    printf("Sum = %d\n", add(2, 3));
    printf("Avarage = %f\n", avg(10, 10));

    return 0;
}