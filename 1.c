#include <stdio.h>

int main(int argc, char const *argv[])
{
    int result;
    int i = 0;

    while(i < 10)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            result += i;
        }
        i++;
    }
    printf("%d", result);
    return 0;
}
