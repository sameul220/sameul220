///enter array index value by taking input from the user

#include<stdio.h>
void main()
{
int i,a[15],n;
  printf("how many element:");
  scanf ("%d",&n);
  printf ("enter the elemets are: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
  
printf ("the elemets are: ");
  for(i=0;i<n;i++){
    printf("%d",a[i]);}
  
}
