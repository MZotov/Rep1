#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short n, i;
    int a, max;
    scanf("%u\n", &n);
    scanf("%i", &a);
    max = a;
    for (i = 2; i <= n; i++)
    {
        scanf("%i", &a);
        if (a > max)
            max = a;

    }
    printf("%i\n", max);
    return 0;
}
