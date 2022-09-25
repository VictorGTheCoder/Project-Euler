#include "header.h"


long long int power(int nb, int power)
{
    long long int result = 1;
    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return result;
}

int sumofnb(long long unsigned int nb)
{
    int sum = 0;
    while (nb > 9)
    {   
        sum += nb % 10;
        nb /= 10;
    }
    sum += nb % 10;
    return sum;
}

int main(int argc, char const *argv[])
{
    printf("5 : nb %llu sum %d\n", power(2,5), sumofnb(power(2,5)));
    printf("10 : nb %llu sum %d\n", power(2,10), sumofnb(power(2,10)));
    printf("15 : nb %llu sum %d\n", power(2,15), sumofnb(power(2,15)));
    printf("20 : nb %llu sum %d\n", power(2,20), sumofnb(power(2,20)));
    printf("25 : nb %llu sum %d\n", power(2,25), sumofnb(power(2,25)));
    printf("50 : nb %llu sum %d\n", power(2,50), sumofnb(power(2,50)));
    return 0;
}
