#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,n,m;
	float sumx=0,sumy=0,sumxy=0,sumx2=0,x[100],y[100],b,a;
	printf("Enter 1 for linear 2 for power and 3 for exponential");
	scanf("%d",&m);
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
	
	
	switch(m)
	{
		case 1:
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
		break;
		
		case 2:
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
		break;
		
		case 3:
		printf("x\t\t\ty\t\t\tlogy=Y\t\txY\t\tx2\n");
		for(i=0;i<n;i++)
		{
			sumx=sumx+x[i];
			sumy=sumy+log(y[i]);
			sumxy=sumxy+(x[i]*log(y[i]));
			sumx2=sumx2+pow(x[i],2);
			printf("%f\t\t%f\t\t%.4f\t\t%.4f\t\t%.4f\n",x[i],y[i],log(y[i]),x[i]*log(y[i]),pow(log(x[i]),2));
		}
		
		
		b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-pow(sumx,2));
		a=(sumy-b*sumx)/(n);
		a=exp(a);
		printf("The value of a=%f and b=%f\n",a,b);
		printf("The required equation is %.4f*e^%.4fx",a,b);
		break;
			
	}
	

}
