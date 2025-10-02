#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x, y;
    char op;

    printf("input x, op, y: ");
    scanf("%i %c %i", &x, &op, &y);

    if (op == '+')
        printf("%i %c %i = %i\n", x, op, y, x+y);
    else if (op == '-')
        printf("%i %c %i = %i\n", x, op, y, x-y);
    else if (op == '*')
        printf("%i %c %i = %i\n", x, op, y, x*y);
    else if (op == '/')
        printf("%i %c %i = %i\n", x, op, y, x/y);
    else
        return 0;

    system("PAUSE");	
    return 0;
}
