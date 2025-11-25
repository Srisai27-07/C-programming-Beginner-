/*
#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1,t3;
    printf("Enter the value for n till where you want the series: ");
    scanf("%d",&n);
    printf("The fibonacci series is as follows:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",t1);
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
    }
     return 0;
}
*/

#include<stdio.h>
int fibb(int n)
{
    if(n == 0)
    return 0;
    else if(n == 1)
    return 1;
    else
    return fibb(n - 1) + fibb(n - 2);
}

int main()
{
    int num,i;
    printf("Enter the number till where you want the series: ");
    scanf("%d",&num);
    printf("The Fibonacci series is: \n");
    for(i = 0;i < num;i++)
    {
        printf("%d \n",fibb(i));
    }
return 0;
}
