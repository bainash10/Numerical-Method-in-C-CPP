#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x-4*x-10
#define fd(x) 2*x-4
#define e 0.0001
int main()
{
	int i=1;
	double x0,x1,f,fd,f1;
	
	printf("Enter the initial guess:");
	scanf("%lf",&x0);
	
	printf("Iter \t x0 \t\t x1 \t\t f \t\t fd \n");
	up:
	f=f(x0);
	fd=fd(x0);
	
	x1=x0-(f/fd);
	
	f1=f(x1);
	
	if(fabs(f1)<=e)
	{
		printf("%d \t %lf \t %lf \t %lf \t %lf \n",i, x0,x1,f,fd);
		printf("The root is %lf",x1);	
	}
    
    else
    {
    	printf("%d \t %lf \t %lf \t %lf \t %lf \n",i, x0,x1,f,fd);
    	i++;
    	x0=x1;
    	goto up;
	}
	
	return 0;
}
