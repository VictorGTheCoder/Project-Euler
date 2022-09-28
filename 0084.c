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
int facto(int nb, int result)
{
    if (nb == 1)
        return result;
    else
    {
        facto(nb - 1, result*nb);
    }
}
char **create_perm(char *entry)
{
    char **result;
    int len = 0;
    while(entry[len++]);
    

    return result;

}


int main(int argc, char const *argv[])
{
    
    return 0;
}

