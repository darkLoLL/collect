#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    a += b * c;
    b -= c / b;

    printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c *= 2 * (a - c), d %= a);
    printf("e = %d\n", e = a + b + c + d);
    return 0;
}