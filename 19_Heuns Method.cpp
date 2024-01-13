#include<stdio.h>
#include<conio.h>
#define f(x,y) (2*y/x)

int main()
{
	float x,y,h,y1,z,w,u;
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
	w=f(x,y);
	u=y+h*w;
	x=x+h;
	
	
	y1=y+(h/2)*(w+f(x,u));  
	y=y1;
	
	}
	
	printf("The x = %f  y= %f",x,y1);
	
	return 0;
}
