#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	//khai bao bien 
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int max = a;
	
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