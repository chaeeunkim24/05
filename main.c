#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    
    printf("���� �ϳ��� �Է��ϼ���: ");
    scanf("%i", &x);
  
    if (x < 0)
       printf("x = %i\n", -x);
    else
        printf("x = %i\n", x);
   
    system("PAUSE");	
    return 0;
}
