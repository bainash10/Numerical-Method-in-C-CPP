#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001

int main() {
    int n, i, j;
    float x_old[10], x_new[10], a[10][10], sum, flag = 1;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the augmented matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            printf("a[%d][%d]=", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Initializing x_old with zeros
    for (i = 1; i <= n; i++) {
        x_old[i] = 0;
    }

    while (flag == 1) 
	{
        flag = 0; // Reset the flag at the beginning of each iteration

        for (i = 1; i <= n; i++) 
		{
	            sum = 0;
	
	            for (j = 1; j <= n; j++) 
				{
	                if (i != j) 
					{
	                    sum = sum + a[i][j] * x_old[j];
	                }
	            }
	
	            x_new[i] = (a[i][n + 1] - sum) / a[i][i];
	
	            if (fabs(x_new[i] - x_old[i]) > e) 
				{
	                flag = 1; // Set the flag if any x_new is not within the tolerance
	            }
        }

        // Update x_old for the next iteration
        for (i = 1; i <= n; i++) 
		{
            x_old[i] = x_new[i];
        }
    }

    printf("Result is:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d]=%f\n", i, x_new[i]);
    }

    return 0;
}

