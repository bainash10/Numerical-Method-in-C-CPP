#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (5+x)/(1+x)
#define e 0.0001

int main()
{
	int i=1;
	float x0,x1;
	printf("Enter the value of x0:");
	scanf("%f",&x0);
	printf("It\tx1\n");
	up:
	x1=f(x0);
	
	if (fabs(x1-x0) <= e)  //fabs(f(x1)<=e) garna namilne cause infinite loop
	{	
		printf("%d\t%.4f\n",i,x1);
		printf("The root is %.4f",x1);
	}
	else
	{
		printf("%d\t%.4f\n",i,x1);
		x0=x1;
		i++;
		goto up;
	}
	
	
	
	return 0;
}
