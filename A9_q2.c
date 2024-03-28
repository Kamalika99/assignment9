#include <stdio.h>
struct Student
{
    char rollNo[10];
    char name[10];
    char address[10];
    int age;
    float avg;
};
void show(struct Student stu)
{
    printf("\nStudent Details:\n");
    printf("Roll No: %s\n", stu.rollNo);
    printf("Name: %s\n", stu.name);
    printf("Address: %s\n", stu.address);
    printf("Age: %d\n", stu.age);
    printf("Average Marks: %.2f\n", stu.avg);
}

int main()
{
    struct Student students[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%s", students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average Marks: ");
        scanf("%f", &students[i].avg);
    }

    for (i = 0; i < 6; i++)
    {
        show(students[i]);
    }

    return 0;
}