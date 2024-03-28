#include <stdio.h>
struct Address
{
    char street[50];
    char city[50];
    char zipCode[10];
};
struct Person
{
    char name[20];
    struct Address address;
} person1;

int main()
{

    printf("Enter the details:\n");
    printf("Enter the name  : ");
    gets(person1.name);
    printf("Enter the street : ");
    gets(person1.address.street);
    printf("Enter the city : ");
    gets(person1.address.city);
    printf("Enter the Zip Code : ");
    scanf(" %s", person1.address.zipCode);

    printf("Person Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Address:\n");
    printf("  Street: %s\n", person1.address.street);
    printf("  City: %s\n", person1.address.city);
    printf("  Zip Code: %s\n", person1.address.zipCode);

    return 0;
}