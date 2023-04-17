
#include "header.h"

//1,5,10 || 2,4,10

//2,5,9 || 3,4,9
//
/*

5,10,1
2,4,10
3,9,4
1,6,9


*/

struct mv
{
    int data;
    int is_use;
};



int *foundnextab(int c, int *copyA)
{
    int i = 0;
    int j;
    int *result = malloc(sizeof(int)*3);
    int a;
    int b;
    while (i < 11)
    {
        j = 0;
        while (j < 11)
        {
            a = copyA[i];
            b = copyA[j];
            if (a + b + c == 16 && a != 0 && b != 0 && c != 0 && a != b && a != c && b != c)
            {
                result[0] = a;
                result[1] = b;
                result[2] = c;
                printf("%d %d %d\n", a, b, c);
                copyA[i] = 0;
                copyA[j] = 0;
                i = 0;
                return result;
            }
            j++;
        }
        
        i++;    
    }
    printf("NULL\n");
    result[0], result[1], result[2] = 0;
    printf("RETRY\n");
    return result;
}

int *copy(int *nblist)
{
    int *copyt = malloc(sizeof(int) * 10);
    int h = 0;
    while (h < 10)
    {
        copyt[h] = nblist[h];
        h++;
    }
    return copyt;
}

int process()
{
    int initc = 1;
    int c = initc;
    int *result;
    int l = 0;
    int nblist[10] = {1,2,3,4,5,6,7,8,9,10};
    int z = 0;
    int test = 0;
    while (test < 10){
        int *copyA = copy(nblist);
        while (l < 6)
        {
            //printf("C = %d\n", c);
            result = foundnextab(c, copyA);
            if (result[0] == 0)
            {
                break;
            }
            c = result[1];
        
            //printf("%d %d %d\n",result[0], result[1], result[2]);
            /*while (z < 10)
            {
                printf("%d", nblist[z++]);
            }*/
            l++;
            
        }
        test++;
        z = 0;
        while (z < 10)
        {
            printf("%d,", copyA[z++]);
        }
        printf("\n");
        initc++;
    }
    while (z < 10)
    {
        printf("%d,", nblist[z++]);
    }
}


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
    process();
    //printf("%d\n", facto(1));
    return 0;
}
