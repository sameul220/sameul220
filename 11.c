/// ensure leap year

#include<stdio.h>
void main()
{
int y;
  printf ("enter the year:");
  scanf("%d",&y);
  if(y%4==0 && y%100!=0)
  {
  printf("%d is a leap year",y); 
  }
  else if(y%400==0)
  {
    printf("%d is a leap year",y);
  }
  else
  {
    printf("%d is not leap year",y);

  }
}
