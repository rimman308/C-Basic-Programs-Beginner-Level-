#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} D;

// Gives output but the logic is not completely correct

// D compareDate(D d1, D d2)
// {
//     if (d1.day > d2.day && d1.month > d2.month || d1.year > d2.year)
//     {
//         printf("First date greater than second date");
//     }
//     else if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
//     {
//         printf("Both dates are same \n");
//     }
//     else //if(d1.day < d2.day && d1.month < d2.month && d1.year < d2.year)
//     {
//         printf("First date smaller than second date\n");
//     }
// }

// The completely correct logic

void compareDate(D d1, D d2)
{
    if (d1.year > d2.year)
        printf("First date is greater than second date\n");
    else if (d1.year < d2.year)
        printf("First date is smaller than second date\n");
    else if (d1.month > d2.month)
        printf("First date is greater than second date\n");
    else if (d1.month < d2.month)
        printf("First date is smaller than second date\n");
    else if (d1.day > d2.day)
        printf("First date is greater than second date\n");
    else if (d1.day < d2.day)
        printf("First date is smaller than second date\n");
    else
        printf("Both dates are the same\n");
}

int main()
{
    D d1 = {26, 1, 2025};
    D d2 = {26, 12, 2024};

    compareDate(d1, d2);

    return 0;
}