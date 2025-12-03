#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void main() {
    struct Student s, *ptr;

    ptr = &s;  // pointer points to structure s

    // Input using pointer
    printf("Enter Student Details:\n");

    printf("Name: ");
    scanf("%s", ptr->name);

    printf("Roll: ");
    scanf("%d", &ptr->roll);

    printf("Marks: ");
    scanf("%d", &ptr->marks);

    // Display using pointer
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);
}
