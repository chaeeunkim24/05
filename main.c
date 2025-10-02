#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    int trial = 0;
    int ans = 59;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &x);
        
        if (x < ans)
            printf("low!\n");
        else if (x > ans)
            printf("high!\n");
            
        trial++;
    } while (x != ans);
    
    printf("Congratulation! trial is %i\n", trial);
    
    system("PAUSE");
    return 0;
}
