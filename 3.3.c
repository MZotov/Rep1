#include <stdio.h>
#include <stdlib.h>

int fib(int a)
{
    if ((a == 1)||(a == 2))
        return 1;
    else
        return (fib(a - 1) + fib(a - 2));
}
int main()
{
    unsigned short n;
    scanf("%u", &n);
    printf("%i\n", fib(n));
    return 0;
}
