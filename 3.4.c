#include <stdio.h>
#include <stdlib.h>
int coef(n, k)
{
    if ((k == 0)||(k == n))
        return 1;
    else
        return coef(n - 1, k) + coef(n - 1, k - 1);
}

int main()
{
    int n, i;
    scanf("%i", &n);
    for (i = 0; i <= n; i++)
    printf("%i ", coef(n, i));
    return 0;
}
