#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,n;
	float sumx=0,sumy=0,sumxy=0,sumx2=0,x[100],y[100],b,a;
	printf("Enter the no of data");
	scanf("%d",&n);
	printf("Enter the data one by one\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
		printf("y[%d]=",i);
		scanf("%f",&y[i]);
	}
	
	printf("x\t\t\ty\t\t\tlogx=X\t\tlogy=Y\t\tXY\t\tX2\n");
	for(i=0;i<n;i++)
	{
		sumx=sumx+log(x[i]);
		sumy=sumy+log(y[i]);
		sumxy=sumxy+(log(x[i])*log(y[i]));
		sumx2=sumx2+pow(log(x[i]),2);
		printf("%f\t\t%f\t\t%.4f\t\t%.4f\t\t%.4f\t\t%.4f\n",x[i],y[i],log(x[i]),log(y[i]),log(x[i])*log(y[i]),pow(log(x[i]),2));
	}
	
	b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-pow(sumx,2));
	a=(sumy-b*sumx)/(n);
	a=exp(a);
	printf("The value of a=%f and b=%f\n",a,b);
	printf("The required equation is %.4f*x^%.4f",a,b);
	return 0;
}
