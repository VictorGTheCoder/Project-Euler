#include "header.h"

//0,7,9 || 9,7,0 || 0,9,7 || 9,0,7 || 7,0,9 || 7,9,0
// 8,3,5 || 8,6,2 || 8,7,1


//2,5,9 || 3,4,9
//
/*

3,4,9
0,9,7
1,7,8
6,8,2
5,2,

*/
int facto(int nb)
{
    if (nb == 1)
        return nb;
    else
    {
        return nb*facto((nb - 1));
    }
}
char **create_perm(char *entry)
{
    char **result;
    int len = 0;
    int i = 0;
    while(entry[len++]);
    
    int size = facto(len);
    result = malloc(size);
    while (i < size)
    {
        result[i] = malloc(len);
        
        i++;
    }
    return result;
}


int main(int argc, char const *argv[])
{
    printf("%d\n", facto(1));
    return 0;
}

