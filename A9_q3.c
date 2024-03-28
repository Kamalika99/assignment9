#include <stdio.h>
struct Date
{
    int day;
    int month;
    int year;
};
int compareDates(struct Date date1, struct Date date2)
{
    if (date1.year > date2.year)
    {
        return 1;
    }
    else if (date1.year < date2.year)
    {
        return -1;
    }
    else
    {
        if (date1.month > date2.month)
        {
            return 1;
        }
        else if (date1.month < date2.month)
        {
            return -1;
        }
        else
        {
            if (date1.day > date2.day)
            {
                return 1;
            }
            else if (date1.day < date2.day)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}

int main()
{
    struct Date date1 = {28, 3, 2000};
    struct Date date2 = {27, 3, 2024};
    int result = compareDates(date1, date2);
    printf("%d", result);

    return 0;
}