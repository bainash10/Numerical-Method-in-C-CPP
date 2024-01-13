#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	float x[10],a[10][10],ratio,sum;
	printf("Enter the order of matix: ");
	scanf("%d",&n);
	printf("Enter the augmented matrix:\n");
	//Taking Inputs
	for(i=1;i<=n;i++) //row
	{
		for(j=1;j<=n+1;j++) //column
		{ 
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	
	//Upper triangular matrix
	for(i=1;i<=n;i++) //row
	{
		for(j=i+1;j<=n;j++)   //because j must be greater then i   //row
		{
			ratio=a[j][i]/a[i][i];
			for(k=1;k<=n+1;k++)  //column
			{
				a[j][k]=a[j][k]-ratio*a[i][k];
			}
		}
		
	}
	
	//backward substitution
	x[n]=a[n][n+1]/a[n][n];  //z ko value
	
	//for y and x ko value
	for(i=n-1;i>=1;i--)
	{
		sum=0;
		for(j=i+1;j<=n;j++)
		{
			sum=sum+a[i][j]*x[j];
		}
		x[i]=((a[i][n+1])-sum)/a[i][i];
	}
	
	
	//printing result
	for(i=1;i<=n;i++)
	{
		printf("%f\n",x[i]);
	}
	return 0;
}
