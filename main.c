#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int max = c;
	//khai bao bien 
	scanf("%d",&a);
	scanf("%d",&b);
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