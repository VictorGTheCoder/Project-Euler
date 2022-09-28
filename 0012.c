#include "header.h"


int nbdivisor(long tnb)
{
    int i = 1;
    int count = 0;
    while (i <= tnb / 2)
    {
        if (i == 20 && count < 16)
            return (0);
        if (tnb % i == 0)
        {
            //printf("%d\n", i);
            count++;
        }
        i++;
    }
    return count + 1;
}

int main(int argc, char const *argv[])
{
    int tnb = 0;
    int i = 0;
    int c = 0;
    while (42 == 42)
    {
        tnb += i;

        c = nbdivisor(tnb);
        if (c > 200)
        {
            printf("NB DIVISOR = %d ", c);
            printf("TNB = %d\n", tnb);
        }
        
        if (c > 500)
        {
            return (0);
        }
        //printf("%d\n", tnb);
        i++;
    }
    
    return 0;
}
