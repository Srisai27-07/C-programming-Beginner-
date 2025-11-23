#include<stdio.h>
int main() 
{
    int a[5];
    int i, isthere = 0, key;
    printf("Enter any 5 numbers: ");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("The given array is: ");
    for(i = 0; i < 5; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter any one number to check whether it is present in the entered array: ");
    scanf("%d", &key);
    printf("\n");
    for(i = 0; i < 5; i++) 
    {
        if(key == a[i]) 
        {
            isthere = 1;
            break;
        }
    }
    if(isthere == 1) 
    {
        printf("The entered number is present in the array.\n");
    } 
    else 
    {
        printf("The entered number is not present in the given array.\n");
    }
    return 0;
}
