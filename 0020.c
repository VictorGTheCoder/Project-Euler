#include "header.h"
char *addition(char *nb1, char *nb2)
{
    int l1 = 0;
    int l2 = 0;
    int i = 0;
    int sizeoftab = 3;
    int keep = 0;
    char *result = malloc(sizeoftab * sizeof(char));

    while (nb1[++l1]);
    while (nb2[++l2]);
    
    printf("%d\n", l1);
    printf("%d\n", l2);
    while (nb1[i] && nb2[i])
    {
        result[sizeoftab - 1 - i] = ((((nb1[l1 - 1 - i] - '0') + (nb2[l2 - 1 - i] - '0'))%10 + keep)%10) + '0';
        keep = (nb1[l1 - 1 - i] - '0' + nb2[l2 - 1 - i] - '0')/10;
        printf("%d\n", keep);
        i++;
    }
    return result;
}

char *mult(char *nbc, int nbm)
{
    int i = 0;
    int len = 0;
    int cnb;
    int m;
    int r;
    while (nbc[len])
        len++;
    while (nbc[len - 1 - i])
    {
        cnb = nbc[len - 1 - i] + '0';
        m = cnb * nbm;

    }
    

    
}

long long unsigned int facto(long long unsigned int x, int n)
{
    if (x % 10 == 0)
        x /= 10;
    if (n < 1)
    {
        printf("%llu\n", x);
        return (x);
    }
        
    return (facto(x*n, n - 1));
}



int main(int argc, char const *argv[])
{
    //facto(1, 9);
    char *nb1 = "129";
    char *nb2 = "19324";
    printf("%c\n", addition(nb1, nb2));
    return 0;
}
