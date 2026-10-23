#include <stdio.h>

int main() {
  int w;
  int h;
  char BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w / ((h/100)*(h/100));
  if(BMI<18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if (BMI >= 18.5 && BMI < 24.9999)
  {
    printf("NORMAL");
  }
  else if (BMI >=24.9999 && BMI < 30)
  {
    printf("OVERWEIGHT");
  }
  else 
  {
    printf("OBESE");
  }
  return 0;
}