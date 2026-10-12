#include <stdio.h>
int main()
{ 
	int Distance;
	int Oder_value;
	printf("Distance: ");
 	scanf("%d",&Distance);
 	printf("Oder_value: ");
 	scanf("%d",&Oder_value);
 	if(Distance==0,Oder_value<=0)
 	{
 		printf("INVALID");
 		return 0;
	 }
	if (Oder_value>=500000 && Distance<=15)
	{
		
		printf("\nFREE");
		return 0;
	}
 	if(Distance>=1 && Distance<=15)
	{
	
	 	Distance>=1 && Distance<=5;
	 	printf("\n15000");
 		return 0;	
	}
	if(Distance>=6 && Distance<=15)
	{
		printf("\n25000");
		return 0;
	}
	if (Distance>15)
	{
		printf("\n40000");
		return 0;
	}

	
}