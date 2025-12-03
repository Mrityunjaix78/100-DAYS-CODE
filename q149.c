#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student*) malloc(sizeof(struct Student));

    if(s == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Input student details
    printf("Enter Student Details:\n");

    printf("Name: ");
    scanf("%s", s->name);

    printf("Roll: ");
    scanf("%d", &s->roll);

    printf("Marks: ");
    scanf("%d", &s->marks);

    // Output
    printf("\nName: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    // Free memory
    free(s);
}
