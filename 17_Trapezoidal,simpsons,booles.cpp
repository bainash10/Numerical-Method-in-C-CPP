#include<stdio.h>
#include<conio.h>
#define f(x) x*x*x+1

int main()
{
	
	int n,i,option;
	float a,b,h,fa,fb,sum=0.0,x,sum1=0,sum2=0,I;
	
	printf("Enter 1 for trapezoidal, 2 for simpsons 1/3, 3 for simpsons 3/8, and 4 for booles rule ");
	scanf("%d",&option);
	
	printf("Enter the value of a and b");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number of intervals");
	scanf("%d",&n);
	
	switch(option)
	{
	
	case 1: //trapezoidal	
		fa=f(a);
		fb=f(b);
		h=(b-a)/n;
		
		sum=sum+fa+fb;
		for(i=1;i<=n-1;i++)
		{
			sum=sum+(2*f(a+i*h));
		}
		I=(h*sum)/2;
		
		printf("The result is %f",I);
		break;
		
	case 2:  //simp 1/3
		fa=f(a);
		fb=f(b);
		h=(b-a)/n;
		
		for(i=1;i<=n-1;i++)
		{
			x=a+i*h;
			if(i%2==0)
			{
				sum1=sum1+(2*f(x));
			}
			else
			{
				sum2=sum2+(4*f(x));
			}
		}
		I=(h/3)*(sum1+sum2+fa+fb);
		printf("The result is %.4f",I);
		break;
		
	case 3:  //simp 3/8
		fa=f(a);
		fb=f(b);
		h=(b-a)/n;
		
		for(i=1;i<=n-1;i++)
		{
			x=a+i*h;
			if(i%3==0)
			{
				sum1=sum1+(2*f(x));
			}
			else
			{
				sum2=sum2+(3*f(x));
			}
		}
		I=((3*h)/8)*(sum1+sum2+fa+fb);
		printf("The result is %.4f",I);
		break;
		
	case 4:  //booles
		fa=f(a);
		fb=f(b);
		h=(b-a)/n;
		
		for(i=1;i<=n-1;i++)
		{
			x=a+i*h;
			if(i%2==0)
			{
				sum1=sum1+(12*f(x));
			}
			else
			{
				sum2=sum2+(32*f(x));
			}
		}
		I=((2*h)/45)*(sum1+sum2+7*fa+7*fb);
		printf("The result is %.4f",I);
		break;		
		
}
		
		
return 0;		
}
