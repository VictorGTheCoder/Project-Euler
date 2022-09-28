#include <stdio.h>

long int is_prime(long int nb)
{
    long int nb2 = 1;
    while (++nb2 < nb/nb2)
    {
        if (nb % nb2 == 0)
            return 0;
         
    }
    return nb;
}


long int main(long int argc, char const *argv[])
{
    long int nb = 600851475143;
    long int i = 1;
    while (i < nb)
    {
        if (nb % i == 0)
        {
            nb = nb / i;
             printf("FIRST :%ld\n", i);
           if (is_prime(nb) != 0)
            {
                printf("PRIME %ld  \n", nb);
                return 0;
            }
        }
        
        i++;
    }
    
    return 0;
}
