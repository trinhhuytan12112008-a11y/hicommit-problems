#include <stdio.h>

int main() {
  int d;
  int m;
  int y;
  int c = 0;
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(y<1)
  {
    printf("INVALID");
    return 0;
  }

  if(y%400 == 0 || y%4 == 0 && y%100 != 0)
  { 
     if(m == 2 && d <= 29)
     {
       printf("VALID");
       c = 1;
     }
  }
  else if ((c == 0 ) && (m == 2) && (d <= 28 && d >= 1))
  {
    printf("VALID");
  }
  
  else if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d <= 31) )
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