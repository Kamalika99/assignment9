#include <stdio.h>
struct CourseRecord
{
    char firstName[50];
    char lastName[50];
    int rollNumber;
    char department[50];
    char courseCode[20];
    int testMarks[3];
};

float avg(struct CourseRecord record)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += record.testMarks[i];
    }
    return (float)sum / 3;
}

int isPass(struct CourseRecord record)
{
    float average = avg(record);
    return average >= 35 ? 1 : 0;
}

int main()
{
    struct CourseRecord student;
    printf("Enter student's first name: ");
    scanf("%s", student.firstName);
    printf("Enter student's last name: ");
    scanf("%s", student.lastName);
    printf("Enter student's roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter student's department: ");
    scanf("%s", student.department);
    printf("Enter course code: ");
    scanf("%s", student.courseCode);
    printf("Enter test marks for three tests: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &student.testMarks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Name: %s %s\n", student.firstName, student.lastName);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Department: %s\n", student.department);
    printf("Course Code: %s\n", student.courseCode);
    printf("Test Marks: %d, %d, %d\n", student.testMarks[0], student.testMarks[1], student.testMarks[2]);
    printf("Average Test Marks: %.2f\n", avg(student));
    printf("Result: %s\n", isPass(student) ? "Pass" : "Fail");

    return 0;
}