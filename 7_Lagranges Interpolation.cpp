#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n,j;
	float x[100],y[100],xp,yp=0,term;
	printf("Enter the interpolating point");
	scanf("%f",&xp);
	printf("Enter the number of data");
	scanf("%d",&n);
	printf("Enter the values of x and y respectively\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
		printf("y[%d]=",i);
		scanf("%f",&y[i]);
	}
for (i=0; i<n; i++)
{
	term=y[i];
	for(j=0;j<n;j++)
	{
	    if (i!=j)
	    {
	       term=term*((xp-x[j])/(x[i]-x[j]));
	    }
	}
	yp=yp+term;
}


	
	printf("The interpolated value is %f",yp);
	
	return 0;
}
