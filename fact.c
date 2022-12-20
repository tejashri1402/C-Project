#include<stdio.h>
main()
{
  fact()
}
void fact()
{
  int n,i,f=1;
  printf("\n Enter a number: ");
  scanf("%d"&n);
  for(i=0;i<n;i++)
  {
    f=f*i;
  }
  printf("\n Factorial is : %d",f);
}
