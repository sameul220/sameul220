/// chack is it prime number or not

#include <stdio.h>
void main ()
{
int i ,n,c=0;
  printf("enter a number");
  scanf ("%d",&n);
  for (i=2;i<n/2;i++)
  {
   if(n%i==0)
     c++;
     break;
  }
  if (c==0)
  {
  printf ("%d is a prime number",n);
  }


}
