#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int max = c;
	//khai bao bien 
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so nguyen thu hai:  ");
	scanf("%d",&b);
	printf("Nhap so nguyen thu ba: ");
	scanf("%d",&c);
	
	if (a > max)
	{
		max = a;
	}
	if (b > max)
	{
		max = b;
	}
	printf("%d",max);
	return 0;

}