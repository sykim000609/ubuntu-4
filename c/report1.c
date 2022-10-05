#include <stdio.h>
#include <libeod.h>

void main()
{
  int x;
  printf("Input number : ");
  scanf("%d",&x);
  if(x%2==0)
  {
    printf("\n even");
  }
  else
  {
    printf("\n odd");
  }
}
