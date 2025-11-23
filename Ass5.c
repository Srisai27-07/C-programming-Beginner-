#include<stdio.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int i,j,k,r1,c1,r2,c2;
    int sum[10][10]= {0};
    int mul[10][10] = {0};

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d",&r1);
    printf("\n");
    printf("Enter the number of column for the first matrix: ");
    scanf("%d",&c1);
    printf("\n");

    printf("Enter the first matrix: ");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }

    printf("The entered matrix is: \n");
   for(i = 0; i < r1; i++)
    {
        printf("[");
        for(j = 0; j < c1;j++)
        {
            printf("%d ",a[i][j]); 
        }
        printf("]\n");
    }

    printf("Enter the numbers of rows for second matrix: ");
    scanf("%d",&r2);
    printf("\n");
    printf("Enter the number of the columns for the second matrix: ");
    scanf("%d",&c2);
    printf("\n");
    printf("Enter the second matrix: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("The entered matrix is: \n");
    for(i=0;i<r2;i++)
    {
        printf("[");
    
        for(j=0;j<c2;j++)
        {
         printf("%d ",b[i][j]);
        }
      printf("] \n");  
    }

    for(i=0;i<c1 || i<c2;i++)
    {
        for(j=0;j<c1 || j<c2;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
   if(r1 == r2 && c1 == c2) 
   {
    for(i=0;i<r1;i++) 
    {
        for(j=0;j<c1;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of the given matrices is:\n");
    for(i=0;i<r1;i++) 
    {
        printf("[ ");
        for(j=0;j<c1;j++) 
        {
            printf("%d ",sum[i][j]);
        }
        printf("]\n");
    }
} 
    else 
   {
     printf("Matrix addition not possible due to different dimensions.\n");
   }
if(c1 == r2) 
{
    for(i=0; i<r1; i++) 
    {
        for(j=0; j<c2; j++) 
        {
            mul[i][j]=0;
            for(k=0; k<c1; k++) 
            {
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("The multiplication of the two matrices is:\n");
    for(i=0;i<r1;i++) 
    {
        printf("[ ");
        for(j=0;j<c2;j++) 
        {
            printf("%d ",mul[i][j]);
        }
        printf("]\n");
    }
}
 else 
{
    printf("The matrix multiplication is not applicable.\n");
}

    return 0;
}