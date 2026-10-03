#include <stdio.h>
#include <string.h>

// A structure (struct) in C is a user-defined data type that lets you group different types of data together

struct Student {
    char name[30];
    int age;
    float marks;
};

void printStruct(struct Student s){
    printf("Student name: %s\n", s.name);
    printf("Student age: %d\n", s.age);
    printf("Student marks: %f\n", s.marks);
}

int main() {

    // creating sturture variable
    struct Student s1;

    // assigning values
    strcpy(s1.name, "Henry");
    s1.age = 18;
    s1.marks = 85.5;

    printStruct(s1);

    // printf("Student name: %s\n", s1.name);
    // printf("Student age: %d\n", s1.age);
    // printf("Student marks: %f\n", s1.marks);
   
    return 0;
}