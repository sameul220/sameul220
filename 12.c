/// chack the grades by using switch case statement

#include <stdio.h>
void main()
{
int m;
  printf("enter the mark\t");
  scanf("%d",&m);
  switch (m/10)
  {
    case 10:
    case 9:
      printf ("A");
      break;
      
    case 8:
      printf("B");
      break ;
      
    case 7:
      printf("C");
      break;
      c
        case 6:
      printf("D");
      break;
      
    case 5:
      printf ("F");
      break;
      
      default:
  printf("invaild maark");
  break;
    
  }
  

}
