//Q130: Store student records using fprintf() and read using fscanf().
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void main() {
    FILE *fp;
    int n, i;
    struct Student s;

    fp = fopen("students.txt", "w");
    if (!fp) {
        printf("Error opening file!");
        return;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
}