#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short n, i;
    int a, b, f;
    scanf("%u", &n);
    a = 1;
    b = 1;
    if ((n == 1)||(n == 2))
        f = 1;
    else
        for (i = 3; i <= n; i++)
        {
            f = a + b;
            a = b;
            b = f;
        }
    printf("%i\n", f);
    return 0;
}
