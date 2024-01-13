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
	printf("x\t\ty\t\txy\t\tx2\n");
	for(i=0;i<n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+y[i];
		sumxy=sumxy+(x[i]*y[i]);
		sumx2=sumx2+pow(x[i],2);
		printf("%.4f\t\t%.4f\t\t%.4f\t\t%.4f\n",x[i],y[i],x[i]*y[i],pow(x[i],2));
	}
	
	
	b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-pow(sumx,2));
	a=(sumy-b*sumx)/(n);
	printf("The value of a=%f and b=%f\n",a,b);
	printf("The required equation is %.4f+%.4f*x",a,b);
	return 0;
}
