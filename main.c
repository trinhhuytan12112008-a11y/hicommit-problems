#include <stdio.h>
int main()
{ 
	int Distance;
	int Oder_value;
	
 	scanf("%d",&Distance);
 	
 	scanf("%d",&Oder_value);
 	if(Distance <= 0 || Oder_value < 0)
 	{
 		printf("INVALID");
 		
	 }
	if (Oder_value>=500000 && Distance<=15)
	{
		
		printf("0");
		
	}
 	if(Distance>=1 && Distance<=5)
	{
	 	printf("15000");
 			
	}
	if(Distance>=6 && Distance<=15)
	{
		printf("25000");
		
	}
	if (Distance>15)
	{
		printf("40000");
		
	}

	return 0;
}