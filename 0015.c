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
int main(int argc, char const *argv[])
{
    int grille = 20;
    int i = 0;
    long long unsigned int finalresult = 1;
    while (i < grille)
    {
        finalresult *= (2*grille) - i;
        finalresult /= i + 1;
        i++;
    }
    //finalresult += power(2,grille);
    printf("FINALRESULT : %llu\n", finalresult);
}
