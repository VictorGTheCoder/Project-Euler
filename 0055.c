#include "header.h"

int is_palindrome(int64_t nb)
{
    int64_t len = 0;
    char *result;
    int64_t nbt = nb;
    while (nbt > 0)
    {
        nbt /= 10;
        len++;
    }
    result  = malloc(len);
    int i = 0;
    while (nb > 0)
    {
        result[i++] = nb % 10;
        nb /= 10;
    }
    int j = 0;
    while (j < i / 2)
    {
        if (result[j] != result[i - j - 1])
            return 0;
        j++;
    }
    return 1;
}


int64_t process(int64_t nb, int n)
{
    int64_t nbt = nb;
    int64_t reversenb = 0;
    int64_t somme;
    if (n == 0)
    {
        return 0;
    }
    
    while (nbt > 0)
    {
        reversenb = reversenb*10 + nbt%10;
        nbt /= 10;
    }
    somme = nb + reversenb;
    if (is_palindrome(somme) != 0)
        return somme;
    else
        return process(somme, n - 1);
}



int main(int argc, char const *argv[])
{
    int i = 0;
    int count = 0;
    while (i < 10000)
    {
        long long int result = process(i, 50);
        if (result > 0)
            count++;
        printf("%lld\n", result);
        i++;
    }
    printf("_____________________\n Result : %d\n=====================\n", 9999 - count);
    return 0;
}
