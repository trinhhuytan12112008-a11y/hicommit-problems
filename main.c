#include <stdio.h>

int main() {
  int d;
  int m;
  int y;
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(y % 400 == 0 || y % 4 == 0 && y % 4 =! 100)
  {
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 && d == 31 )
    {
      printf("VALID");
    }
    else if( m == 4 || m == 6 || m == 9 || m == 11 && d == 30)
    {
      printf("VALID");
    }
    else if(m == 2 && d == 29)
    {
      printf("VALID");
      else if(m == 2 && d == 28)
    {
      printf("INVALID");
    }
    else 
    {
      printf("INVALID");
    }
    }
  }
  return 0;
}