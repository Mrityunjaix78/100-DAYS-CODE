#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Output in tabular form
    printf("\n--------------------------------------------\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("--------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    printf("--------------------------------------------\n");
}
