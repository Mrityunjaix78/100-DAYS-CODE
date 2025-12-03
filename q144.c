    #include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

void main() {
    struct Student s;

    printf("Enter Student Details:\n");

    printf("Name: ");
    scanf("%s", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll);

    printf("Marks: ");
    scanf("%d", &s.marks);

    display(s);   // passing structure to function
}
