#include "header.h"

int main(int argc, char const *argv[])
{
    int i = 1000000;
    long int n = i;
    int count = 0;
    int bestc = 0;
    while (i != 0)
    {
        n = i;
        count = 1;
        while (n > 1)
        {
            if (n%2)
            {
                n = 3*n + 1;
            }
            else
            {
                n /= 2;
            }
            count++;
            
        }
        if (count >= bestc)
        {
            bestc = count;
            printf("I = %d  %d\n",i, count);
        }
        i--;
    }
    return 0;
}
