#include<stdio.h>
main()
{
  printf("\n Welcome");
  printf("\n TO MY PROGRAM ");
  add();
}

void add()
{
  int a,b,c;
  printf("\n Enter a and b: ");
  scanf("%d%d"&a,&b);
  c=a+b;
  printf("\n Addition is :%d",c)
}
