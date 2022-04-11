///sort arrey elements in desscending way

#include<stdio.h>
void main()
{
int p,q,n,t,a[22];
  printf("how many elements");
  scanf("%d",&n);
  printf("enter the elements");
  for(p=0;p<n;p++)
  {
  scanf("%d",&a[p]);
  }
  
  printf("elements are sorted in desscending way:");
  for(p=0;p<n;p++)
  {
  for(q=p+1;q<n;q++)
  {
  if(a[p]<a[q])
  {
  
    t=a[p];
    a[p]=a[q];
    a[q]=t;
  
  }
  
  }
     
  }
  for(p=0;p<n;p++)
  {
  printf("%d\n",p]);
  
  }

}
