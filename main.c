#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("정수 하나를 입력하세요: ");
    scanf("%i", &x);
  
    if (x < 0)
       printf("x = %i\n", -x);
    else
        printf("x = %i\n", x);
   
    system("PAUSE");	
    return 0;
}
