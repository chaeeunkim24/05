#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int i;
    int sum = 0;
    
    printf("input a number: ");
    scanf("%i", &x);
    
    for (i=1 ; i <= x ; i++)
        sum = sum + i;
    
    printf("the result is %i\n", sum);
        
    system("PAUSE");	
    return 0;
}
