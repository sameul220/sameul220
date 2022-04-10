/*grade calculation using ternary operator*/
#include<stdio.h>
void main()
{
int m;'
  printf ("enter the mark:");
  scanf ("%d",&m);
  (m>=0 && m<=100)?((m>89)?(printf("A")):((m>79)?(printf("B")):((m>69)?(printf("C")):((m>59)?(printf("D")):(printf("F")))))):(printf("Invalid Marks"));
	
}



