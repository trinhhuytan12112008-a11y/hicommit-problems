#include <stdio.h>

int main() 
{
  double d;
  float tien;
   
   scanf(%lf, &d);
  if (d<=1)
  {
    tien = d x 15000;
    
  }
else if (d>1 || d<=5)
{
    tien = 1 x 15000 + (d-1) x 13000;
    
}
else {
  tien = 1 x 15000 + 4 x 13000 + (d-5) x 11000;

}

  printf("%f", tien);
  return 0;
}