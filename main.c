#include <stdio.h>
int main()
{
	int n;
	printf("Nhap So Nguyen: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("CHAN");
		return 0;
	}
	if(n%2!=0)
	{
		printf("LE");
		return 0;
	}
}