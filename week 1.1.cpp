#include<stdio.h>

main()
{
	double arr[3];
	int a,b;
	for(a=0;a<=2;a++)
	{
		scanf("%lf",&arr[a]);
	}
	for(a=0;a<=2;a++)
	{
		if(arr[a]>arr[a+1]&&a!=2)
		{
		b=arr[a];
		arr[a]=arr[a+1];
		arr[a+1]=b;
		}
		else if(arr[1]<arr[0])
		{
		b=arr[1];
		arr[1]=arr[0];
		arr[0]=b;	
		}
	}
	printf("MIN 1st,2nd =%.2lf %.2lf ",arr[0],arr[1]);

	
	
}
