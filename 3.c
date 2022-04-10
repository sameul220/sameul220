/*detrmine area of triangle*/
#include <stdio.h>
#include<math.h>
void main()
{
  int s,a,b,c;
  float area;
  printf("enter the value of three side:\n");
  scanf ("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("the area of triangle is:%f",area);
         
         }
  
