#include <stdio.h>

// int main()
// {
//     char c1;
//     printf("请输入你要表示的整数值:\n");
//     scanf("%d,%d",&c1);
//     printf("%d对应的字符是%c",c1);
//     return 0;
// }

int main()
{
    char c1;
    int num;
    printf("请输入你要表示的整数值:");
    scanf("%d", &num);
    c1 = (char)num;
    // c1 = num;
    printf("%d对应的字符是%c\n", c1, c1);
    return 0;
}