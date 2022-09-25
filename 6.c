#include "header.h"

int main(int argc, char const *argv[])
{
    long result = 0;
    long somme = 0;
    long square = 0;
    int i = 0;
    while (i <= 100)
    {
        somme += i;
        square += (i * i);
        i++;
    }
    somme = somme * somme;
    result = somme - square;
    printf("%d", result);
    return 0;
}
