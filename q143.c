#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void main() {
    struct Student s[3];
    int i, topIndex = 0;

    // Input details of 3 students
    for(i = 0; i < 3; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Find highest marks
    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    // Print topper
    printf("Topper: %s (Marks: %d)\n", s[topIndex].name, s[topIndex].marks);
}
