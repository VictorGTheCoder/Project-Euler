#include "header.h"

int main(int argc, char const *argv[])
{
    int day = 1;
    
    int dayofthemonth = 1;
    int month = 1;
    int year = 1900;
    int count = 0;

    while (year < 1920)
    {
        month = 1;
        while (month <= 12)
        {
            if (day % 7 == 0)
                count++;
            if (month == 2)
            {
                if (year % 4 == 0)
                {
                    //printf("Year %d / Month %d / Day %d     Jour Total : %d\n", year, month, dayofthemonth, day);
                    while (dayofthemonth < 29)
                    {
                        day++;
                        dayofthemonth++;
                    }
                }
                else
                {
                    while (dayofthemonth < 28)
                    {
                        day++;
                        dayofthemonth++;
                    }
                }
                
            }
            else if (month == 4 || month == 6 || month == 9 || month ==  11)
            {
                while (dayofthemonth < 30)
                {
                    day++;
                    dayofthemonth++;
                }
            }
            else
            {
                while (dayofthemonth < 31)
                {
                    //printf("Year %d / Month %d / Day %d     Jour Total : %d\n", year, month, dayofthemonth, day);
                    day++;
                    dayofthemonth++;
                }
                dayofthemonth == 1;
            }
            printf("Year %d / Month %d / Day %d     Jour Total : %d\n", year, month, dayofthemonth, day);
            dayofthemonth == 1;
            month++;
            
        }
        year++;
    }
    printf("DAYS : %d\n", day);
    printf("Count : %d\n", count);
    return 0;
}
