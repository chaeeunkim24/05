#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x;
  
  printf("정수 하나를 입력하세요: ");
  scanf("%i", &x);
  
  if (x > 0)
     printf("양수입니다.\n");
  else if (x == 0)
       printf("0입니다.\n");
  else
      printf("음수입니다.\n"); 
   
  system("PAUSE");	
  return 0;
}
