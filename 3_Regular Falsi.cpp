#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-4*x-10
#define e 0.0001

int main()
{
	int i=1;
	float x0,x1,x2,f0,f1,f2;
	printf("Enter the values of x1 and x2");
	scanf("%f %f",&x1,&x2);
	
	f1=f(x1);
	f2=f(x2);
	
	if(f1*f2>0)
	{
		printf("Cannot be done");
	}
	else
	{
	printf("x1 \t\t x2 \t\t f1 \t\t f2 \t\t x0 \t\t f0\n");
	up:
	x0=x1-((f1*(x2-x1))/(f2-f1));
	f0=f(x0);
	if(f0*f1<0)
	{
	x2=x0;
	f2=f0;
	}
	else
	{
	x1=x0;
	f1=f0;
	}
	if(fabs(f0)<=e)
	{
		printf("%d \t\t %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f\n",i,x1,x2,f1,f2,x0,f0);
		printf("The root is %f", x0);
	}
	else
	{
		printf("%d \t\t %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f\n",i,x1,x2,f1,f2,x0,f0);
		i++;	
		goto up;
	}
	}
return 0;
}
