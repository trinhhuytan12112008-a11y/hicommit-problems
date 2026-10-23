#include <stdio.h>

int main() {
  int k;
  long int Dong;
  scanf("%ld",&k);
  if(k<=50)
  {
    Dong= 50 * 1678;
  }
  else if(k<=100)
  {
    Dong= 50 * 1734 + (k-50) * 1678;
  }
  else if(k<=200)
  {
    Dong= 50 * 2014 + (k-50)* 1734 + (k-50) * 1678;
  }
  else if(k<=300)
  {
    Dong = 50 *2536 + (k-50) * 2014 + (k-50) * 1734 +(k-50)*1678;
  }
  else if (k<=400)
  {
    Dong= 50 * 2834 +(k-50) * 2536 + (k-50) * 2014 + (k-50) * 1734 + (k-50) * 1678;
  }
  else
  {
  Dong= 2927ll * (k-400);
  }
  
  return 0;
}