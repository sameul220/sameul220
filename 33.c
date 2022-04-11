///matrix multiplication

#include<stdio.h>
void main()
{
int r,c,k,n,sum=0,a[20][20],b[20][20],mul[20][20];
  printf ("how many rows ");
  scanf("%d",&n);
  printf("enter the value of a matrix:");
  for(r=0;r<n;r++)
  {
  for(c=0;c<n;c++)
    scanf("%d",&a[r][c]);
  }
  printf("enter the value of b matrix:");
  for(r=0;r<n;r++)
  {
  for(c=0;c<n;c++)
    scanf("%d",&b[r][c]);
  }
  printf("the value of a matrix:");
  for(r=0;r<n;r++)
  {
  for(c=0;c<n;c++){
    printf("%d",a[r][c]);}
    printf("\n");
  }
  printf("the value of b matrix:");
  for(r=0;r<n;r++)
  {
  for(c=0;c<n;c++){
    printf("%d",b[r][c]);}
    printf("\n");
  }
  printf("multiplication of matrix a and b:\n");
  for(r=0;r<n;r++){
  for(c=0;c<n;c++){
  for(k=0;k<n;k++){
  sum=sum+a[r][k]*b[k][c];
  }
    mul[r][c]=sum;
    sum=0;
    
  }
  }
  for(r=0; r<n; r++){
        for(c=0; c<n; c++){
            printf("%d\t", mul[r][c]);
        }
        printf("\n");
    }

}
