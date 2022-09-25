#include "header.h"


long int is_prime(long int nb)
{
    long int nb2 = 2;
    while (nb2 < nb/nb2 + 1)
    {
        if (nb % nb2 == 0)
            return 0;
        nb2++;
         
    }
    return nb;
}

int main(int argc, char const *argv[])
{
    int i = 3;
    int j = 2;
    long result = 0;
    while (i < 2000000)
    {
        if (is_prime(i))
        {
            //printf("index : %d %d\n", j,i);
            result+= i;
            j++;
        }
        i = i + 2;
    }
    printf("%ld\n", result + 2);
    return 0;
}
