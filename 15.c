/// a program for half pyramid
#include<stdio.h>
void main()
{
int i,j,n;
  printf("enter the number of shape matrix:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++)
    {
  printf("%d",j+1);
    }
  printf ("\n");}
}
