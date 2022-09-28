#include "header.h"
long int is_prime(long int nb)
{
    long int nb2 = 1;
    while (++nb2 < nb/nb2 + 1)
    {
        if (nb % nb2 == 0)
            return 0;
         
    }
    return nb;
}

int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 1;

    while ( 42 == 42)
    {
        if (is_prime(i))
        {
            if (j == 10001)
            {
                printf("%d\n",  i);
                return 0;
            }
            j++;
        }
        i++;
    }
    return 0;
}
