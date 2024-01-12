#include<stdio.h>
#include<conio.h>

int main()
{
//clrscr();
int i,n,x;
float a[10],p[10];

printf("Enter the value of x:");
scanf("%d",&x);

printf("Enter the number of coefficient:");
scanf("%d",&n);

//Taking from last a3, a2, a1, a0
printf("Enter the coefficients one by one:\n");
for(i=n-1; i>=0; i--)
{
printf("a[%d]=",i);
scanf("%f",&a[i]);
}

//p3=a3
p[n-1]=a[n-1];

printf("------STEPS-------\n");
printf("p[%d]=%f\n",n-1,p[n-1]); //p3=a3 prints

for(i=n-1;i>=1;i--)
{
printf("p[%d]=",i-1); 
	//p[n-1]=p[n]*x+a[n-1]
p[i-1]=p[i]*x+a[i-1];   //direct p vanne variable use garda ni huncha without using p as array
printf("%f\n",p[i-1]);
}

printf("------ANSWER-------\n");
printf("The root is %f", p[0]);
return 0;
}
