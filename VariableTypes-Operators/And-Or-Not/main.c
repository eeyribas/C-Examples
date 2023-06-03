#include<stdio.h>

int main()
{
  int a=0;
  int b=5;
  int c=-4;

  printf("a value %d:\n", a);
  printf("b value %d:\n", b);
  printf("c value %d:\n\n", c);

  // AND
  printf("a AND B value (a AND b):%d\n", a && b);
  printf("b AND c value (b AND c):%d\n\n", b && c);

   // OR
  printf("a OR B nin degeri(a OR b):%d\n", a || b);
  printf("a OR c nin degeri(a OR c):%d\n\n", a || c);

  // NOT
  printf("a NOT  in degeri (NOT a): %d\n", !a);
  printf("c NOT  in degeri (NOT c): %d\n\n", !c);

  return 0;
}
