#include <stdio.h>
long long unsigned int is_prime(long unsigned int nb)
{
    long long unsigned int nb2 = 1;
    while (++nb2 < nb/nb2)
    {
        if (nb % nb2 == 0)
            return 0;
         
    }
    return nb;
}

int main(int argc, char const *argv[])
{
    int i = 0;
    long long unsigned int nb1 = 0;
    long long unsigned int nb2 = 1;
    long long unsigned int temp = 0;
    long long unsigned int result = 0;
    while (nb2 < 4000000)
    {
        temp = nb2;
        nb2 = nb2 + nb1;
        nb1 = temp;
        //printf("%d, ",nb2);
        if (nb2 % 2 == 0)
        {
            result += nb2;
             printf("%llu, ",nb2);
        }
        
        i++;
    }
    printf("\n%llu :",result);
    return 0;
}
