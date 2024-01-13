#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n;
	float x[100],y[100],xp,yp,f1,f2,x1,x2;
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
for (i=0; i<(n-1); i++)
{
    if (xp >= x[i] && xp <= x[i+1])
    {
        f1 = y[i];
        f2 = y[i+1];
        x1 = x[i];
        x2 = x[i+1];
        break;  // Exit the loop once the interval is found
    }
}
	
	yp=f1+((f2-f1)/(x2-x1))*(xp-x1);
	printf("The interpolated value is %f",yp);
	
	return 0;
}
