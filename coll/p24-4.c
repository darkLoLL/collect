#include <stdio.h>

int main()
{
    char firstname[40];
    char lastname[40];

    printf("Enter your first name:");
    scanf("%s",firstname);
    printf("Enter your last name:");
    scanf("%s",lastname);

    printf("%s %s\n",firstname ,lastname);
    return 0;
}