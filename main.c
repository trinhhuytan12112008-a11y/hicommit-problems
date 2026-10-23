#include <stdio.h>
int main() 
{
int Xep_loai;
  scanf("%d",&Xep_loai);}
switch(Xep_loai){
   case 1:
      printf("XEP_LOAI_XUAT_SAC"); 
    case 2:
      printf("XEP_LOAI_GIOI"); break;
    case 3:
      printf("XEP_LOAI_KHA"); break;
    case 4:
      printf("XEP_LOAI_TRUNG_BINH");
    default:
      printf("KHONG_HOP_LE");
  
}