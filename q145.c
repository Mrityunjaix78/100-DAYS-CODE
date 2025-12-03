#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to return the student with highest marks
struct Student getTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // return the top student
}

void main() {
    struct Student s[3], topper;
    int i;

    // Input student details
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

    // Get topper structure
    topper = getTopper(s, 3);

    // Print topper details
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);
}
