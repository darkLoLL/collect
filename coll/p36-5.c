#include <stdio.h>

int main()
{
    int c1,c2,c3,c4,c5,c6;
    c1= c2 = c3 = c4 = c5 = 20;

    c1 = c1 + 5;
    c2 = c2 - 10;
    c3 = c3 * 5;
    c4 = c4 / 10;
    c5 = c5 % 6;
    c6 = -5;

    printf("%d,%d,%d,%d\n",c1,c2,c3,c4);
    printf("%d\n",c5);
    printf("%d\n",c6);
    return 0;
}