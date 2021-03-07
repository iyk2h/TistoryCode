#include <stdio.h>
int main()
{
  int *hi;
  int num;

  hi = &num;
  num = 2;

  printf("num 의 값 : %d \n", num);
  printf("*hi 의 값 : %d \n", *hi);
  printf("hi 의 값 : %d \n", hi);
  printf("num 의 주소값 : %d \n", &num);

  return 0;
}
