#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int max = a;
	//khai bao bien 
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if (b >= max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	printf("%d",max);
	return 0;

}