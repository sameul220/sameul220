///print a reverse order of arrey elements

#include<stdio.h>
void main ()
{
int a[20],p,n;
  printf("how many elements");
  scanf("%d",&n);
  printf("enter the elemets are:");
  for(p=0;p<n;p++){
    scanf("%d",&a[p]);
  }
  printf("the elements are:");
  for(p=n-1;p>=n;p--){
  printf("%d",a[p]);
    
  }

}
