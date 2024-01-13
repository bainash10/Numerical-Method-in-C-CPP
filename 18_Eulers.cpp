#include<stdio.h>
#include<conio.h>
#define f(x,y) (2*y/x)

int main()
{
	float x,y,h,y1,z;
	printf("Enter the initial value of x");
	scanf("%f",&x);
	
	printf("Enter the initial value of y");
	scanf("%f",&y);
	
	printf("Enter the value of h");
	scanf("%f",&h);
	
	printf("Enter which value of y to be found");
	scanf("%f",&z);


	while(x!=z)	
	{
	y1=y+h*f(x,y);  //y1=y[i]+1 last ma 1.75+1 huncha when h=0 so 
	y=y1;
	x=x+h;
	}
	
	printf("The x = %f  y= %f",x,y1);
	
	return 0;
}
