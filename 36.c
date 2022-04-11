///addition of 2 matrix using of arrey

#include<stdio.h>
int input(int a[20][20]);
int show(int a[20][20]);
int add(int a[20][20],int b[20][20] );
int main()
{
int a[20][20],b[20][20],c;
  
  printf("enter the value of a");
  input(a);
  printf("enter the value of b");
  input(b);
  printf("matrix of a value");
  show ("a");
  printf("matrix if bvalue");
  show(b);
  printf("addition of a and b matrix");
  show(add(a,b));

}
int input(int a[20][20])
{
int i,j,n;
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    scanf("%d",&n);
  }
  }
return a[i][j];
}
int show(int a[20][20])
{
int i,j,n;
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    printf("%d",n);
  }
    printf("\n");
  }
return a[i][j];
}
int add(int a[20][20],int b[20][20] )
{
int i,j,n;
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
  c[i][j]=a[i][j]+b[i][j];
    printf("%d",c[i][j]);
  }
  printf("\n");
  }
return c;
}
