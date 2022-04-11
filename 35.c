///Create a user defined function prime() which will return the status of an inputted number wither thatis prime or not prime.

#include<stdio.h>
int prime(int a);
int main()
{
int isprime,n;
  printf("enter a number");
  scanf("%d",&n);
  isprime=prime(n);
  if(isprime !=0)
  {
  printf("%d is a prime number",n);
  }
  else
  {
  printf("%d is not a prime number",n);
  }
  
}
int prime(int a)
{
int i;
  if(a<=1)
  {
  return 0;
  }
  for(i=2;i<=a/2;a++){
  if(a%i==0){
  return 0;
  }
    return 1;
  }

}
