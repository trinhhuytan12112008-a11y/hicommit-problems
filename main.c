#include <stdio.h>

int main() {
  int dtb;
  int drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb>=9 && drl>=9)
  {
    printf("XUAT_SAC");
  }
  else if(dtb>=9 && drl>=80 && drl < 90 || dtb>=8 && dtb<9 && drl >=90 || drl>=80 && drl<90)
  {
    printf("GIOI");
  }
  else if(dtb>=7 && dtb<8 && drl>=70 && drl<80 || drl>=80 && drl<90 || drl >=90 || dtb >=8 && dtb <9 && drl>=7 && drl>8 || dtb>=9 && drl>=70 && drl<80)
    {
      printf("KHA");
    }
  else {
    printf("KHONG_DAT")
  }
  return 0;
}