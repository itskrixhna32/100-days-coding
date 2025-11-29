#include <stdio.h>

struct Student
{
    char name[50]; // structurre for code
    int roll;
    int marks;
};

int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details from user
    for (i = 0; i < n; i++)
    {
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    FILE *fp;
    // Writing student records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n"); // error opeining for writing
        return 1;
    }
    for (i = 0; i < n; i++)
    {

        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks); // printiing
    }
    fclose(fp);

    // Reading and displaying student records from file
    struct Student s;
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {

        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nStudent records:\n");
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) != EOF)
    { // end of line
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    return 0;
}