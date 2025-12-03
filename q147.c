#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void main() {
    struct Employee e1, e2;
    FILE *fp;

    // Input employee details
    printf("Enter Employee Details:\n");

    printf("Name: ");
    scanf("%s", e1.name);

    printf("ID: ");
    scanf("%d", &e1.id);

    printf("Salary: ");
    scanf("%f", &e1.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display data read from file
    printf("\nData read from file:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);
}
