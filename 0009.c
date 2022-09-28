#include "header.h"

int mysqrt(int nb)
{
    int i = 2;
    while (i <= nb / i )
    {
        if (nb / i == i && nb % i == 0)
        {
            return (i);
        }
        i++;
    }
    return (0);
}



int main(int argc, char const *argv[])
{
    int i = 1;
    int j = 2;
    int k = 0;
    
        while (i <  333 && i < j)
        {
            j = i + 1;
            while (j < 666)
            {
                k = mysqrt(j*j + i*i);
                if  (k!= 0)
                {
                    printf("NOP I = %d, J = %d, K = %d Result = %d\n", i, j, k, i+j+k);
                    if (i + j + k == 1000)
                    {
                        printf("I = %d, J = %d, K = %d\n", i, j, k);
                        printf("%d", i*j*k);
                        return 0;
                    }
                }
                j++;
            }
            i++;
        }  
    
    return 0;
}
