#include<stdio.h>
#include<conio.h>
#define f(x,y) (2*y/x)

int main()
{
	float x,y,h,y1,m1,m2,m3,m4,z,n;
	printf("Enter the initial value of x");
	scanf("%f",&x);
	
	printf("Enter the initial value of y");
	scanf("%f",&y);
	
	printf("Enter the value of h");
	scanf("%f",&h);
	
	printf("Enter the x-value at which y is to be found:");
	scanf("%f",&z);


	while(x<z-h)	
	{
		m1=f(x,y);
		m2=f(x+(h/2),y+(m1*(h/2)));
		m3=f(x+(h/2),y+(m2*(h/2)));
		m4=f(x+h,y+(m3*(h)));
	
		y1=y+h*((m1+2*m2+2*m3+m4)/6);  
		y=y1;
		x=x+h;

	
	}
	
	printf("The x = %f  y= %f",x,y1);
	
	return 0;
}
