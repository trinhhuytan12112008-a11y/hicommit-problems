#include <stdio.h>

int main() 
  double d;
  int tien;
    scanf(%f, &d);
  if(d<=1)
  {
    tien = d x 15000;
    printf("%d",tien);
  }
else if(d>1 || d<=5)
{
    tien = 1 x 15000 + (d-1) x 13000;
    printf("%d", tien);
}
else{
  tien = 1 x 15000 + 4 x 13000 + (d-5) x 11000;
  printf("%d", tien);
}
  return 0;
}