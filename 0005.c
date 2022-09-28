
#include <stdio.h>



int main(int argc, char const *argv[])
{
    int nb = 1;
    int i = 1;
    while (0 == 0)
    {
        i = 2;
        while (i < 21)
        {
            if (nb % i != 0)
            {
                break;
                printf("OK %d\n", i);
            }
            if (i == 20)
            {
                printf("%d", nb);
                return 0;
            }
            i = i + 2;
        }
        nb++;
    }
    
    return 0;
}
