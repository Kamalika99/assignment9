#include <stdio.h>
struct company
{
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main()
{
    struct company co;
    printf("Enter company name: ");
    scanf("%s", co.name);

    printf("Enter company address: ");
    scanf("%s", co.address);

    printf("Enter company phone number: ");
    scanf("%s", co.phone);

    printf("Enter number of employees: ");
    scanf("%d", &co.noOfEmployee);
    printf("\nCompany Details:\n");
    printf("Name: %s\n", co.name);
    printf("Address: %s\n", co.address);
    printf("Phone: %s\n", co.phone);
    printf("Number of employees: %d\n", co.noOfEmployee);

    return 0;
}