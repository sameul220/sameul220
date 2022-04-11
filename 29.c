///Write a program to show a Identity matrix

#include<stdio.h>
void main()
{
int r,c,n,a[20][20];
  printf("how many rows");
  scanf("%d",&n);
  
  printf("the identify matrix is:");
  for(r=0;r<n;r++){
  for(c=0;c<n;c++)
  if(r==c)
  {
  printf("1");
  }
    else
    {
    printf("0");
    }  
    printf("\n");
  }
  
}
