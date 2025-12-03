#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Input for second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    // Compare structures
    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll == s2.roll &&
       s1.marks == s2.marks) 
    {
        printf("\nSame\n");
    }
    else {
        printf("\nNot Same\n");
    }
}
