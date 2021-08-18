#include <stdio.h>


main()
{
	double arr[3];
	int a,b,c,n;
	double min;
	for(a=0;a<=2;a++)
	{
		scanf("%lf",&arr[a]);
	}
	
	for(a=0;a<=2;a++)
	{
		min = arr[a];
		n=a;
		for(b=a+1;b<=2;b++)
		{
			if(min>arr[b])
			{
				min=arr[b];
				n=b;
				
			}
		}
		c=arr[a];
		arr[a]=arr[n];
		arr[n]=c;
	}
	printf("MIN 1st,2nd =%.2lf %.2lf ",arr[0],arr[1]);
}
