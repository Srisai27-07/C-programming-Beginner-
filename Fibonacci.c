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
