///write a program to find out a number from an array. if that exist show it, if not then write not found

#include<stdio.h>
void main()
{
int i,f=0,s,a[20],n;
  printf("how many elements");
  scanf("%d",&n);
  printf("enter the elements are:");
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
   printf(" the elements are:");
  for(i=0;i<n;i++)
  {
  printf("%d",a[i]);
  }
  printf("what are you searching for:");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
  if(s==a[i])
  {
  f++;
    break;
  }
    
  }
  if (f==0)
  {
    printf("elements not found");
  }
else{
printf("%d is located in %d position",s,i+1);
}
}
