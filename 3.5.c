#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long int n, i, res;
    scanf("%lu", &n);
    res = 1;
    for (i = 2; i < n; i++)
        if (n % i == 0)
        {
            res = 2;
            break;
        }
    if (res == 1) printf("YES");
        else printf("NO");
    return 0;
}
