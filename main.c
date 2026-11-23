#include <stdio.h>

int main() 
  double d;
  int tien;
   
  if(d<=1)
  {
    tien = d x 15000;
    
  }
else if(d>1 || d<=5)
{
    tien = 1 x 15000 + (d-1) x 13000;
    
}
else{
  tien = 1 x 15000 + 4 x 13000 + (d-5) x 11000;

}
 scanf(%f, &d);
  printf("%d", tien);
  return 0;
}