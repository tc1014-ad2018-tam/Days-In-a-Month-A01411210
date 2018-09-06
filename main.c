#include <stdio.h>
#include <stdlib.h>


int main()
{
    int month;
    signed year;

    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    printf("Enter year:");
    scanf("%i", &year);



    switch(month)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            if (((year%4 == 0)&&(year%100)!=0)||((year%400)==0)
                printf("29 days");
                    else
                printf("28 days");
            break;
        case 3:
            printf("31 days");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days");
            break;
        case 6:
            printf("30 days");
            break;
        case 7:
            printf("31 days");
            break;
        case 8:
            printf("31 days");
            break;
        case 9:
            printf("30 days");
            break;
        case 10:
            printf("31 days");
            break;
        case 11:
            printf("30 days");
            break;
        case 12:
            printf("31 days");
            break;
        default:
            printf("Invalid input! Please enter month number between 1-12");
            exit (0);

    }

    return 0;
}