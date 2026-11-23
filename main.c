#include <stdio.h>

int main() {
  int d;
  int m;
  int y;
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(y<1)
  {
    printf("INVALID");
  }
  else if(m>12 && m<1)
  {
    printf("INVALID");
  }
  else if(d>31 && d<1)
  {
    printf("INVALID");
  }
  if(y%400 == 0 || y%4 == 0 && y%100 != 0)
  { 
   if(m == 2 && d == 29)
   {
     printf("VALID");
   }
  else if (m == 2 && d == 28 )
  {
    printf("INVALID");
  }
  else
  {
    printf("INVALID");
  }
  }
    if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) )
    {
      printf("VALID");
    }
    else if( (m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30))
    {
      printf("VALID");
    }
  else
  {
    printf("INVALID");
  }
  
  return 0;
}