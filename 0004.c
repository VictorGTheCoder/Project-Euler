#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;
    while (str[len])
        len++;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }
    //printf("STR : %s", str);    
}

char *itoa(int nb)
{
    char *result = malloc(10);
    int i = 0;
    while (nb > 9)
    {
        result[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    result[i] = nb + '0';
    strrev(result);
    return result;
}
int is_pal(char *test)
{
    int len = 0;
    int k = 0;

    while (test[len])
        len++;
    //printf("LEN : %d ", len);
    while (k < len / 2)
    {
        if (test[k] != test[len - k - 1])
            return (0);

        k++;
    }
    //printf("LEN : %d ", len);
    return 1;
}

int main(int argc, char const *argv[])
{
    int i = 999;
    int j = 999;
    int result = 0;
    char *test;
    int len = 0;
    int lresult = 0;
    int k;
    while (i > 600)
    {
        len = 0;
        k = 0;
        while (j > 600)
        {
            result = i*j; 
            test = itoa(result);
            if (is_pal(test) == 1 && result > lresult){

                printf("STR : %s    ", test);
                printf("INT : %d\n", result);
                lresult = result;
            }
            
           j--;
        }
        j = 999;
        i--;
    }
    
    return 0;
}
