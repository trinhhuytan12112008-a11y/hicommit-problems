#include <stdio.h>
int main() {
  int Diem;
  scanf("%f",&Diem);
  if(Diem>=9 && Diem<=10)
  {
    printf("A");
  }
 if(Diem>=8 && Diem<9)
  {
    printf("B+");
  }
   if(Diem>=7 && Diem<8)
  {
    printf("B");
  }
   if(Diem>=6,5 && Diem<=6,9)
  {
    printf("C+");
  }
   if(Diem>=5,5 && Diem<=6,4)
  {
    printf("C");
  }
   if(Diem>=5 && Diem<=5,4)
  {
    printf("D+");
  }
   if(Diem>=4 && Diem<5)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }
  return 0;
}