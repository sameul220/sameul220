///short arrey element in asscending order

#include<stdio.h>
void main()
{
int a[20],p,n,q,t;
  printf("how many elements");
  scanf("%d",&n);
  printf("enter the elements");
  for(p=0;p<n;p++){
  scanf("%d",&a[p]);}
  printf("elemnts are shorted in asscending way:");
  for(p=0;p<n;p++){
  for (q=p+1;q<n;q++){
  if(a[p]>a[q]){
  t=a[p];
   a[p]=a[q];
    a[q]=t;
  
  }
  
  }
  
  }
  
   for(p=0;p<n;p++)
   {
   printf("%d\t",a[p]);
   }


}  
