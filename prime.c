#include <stdio.h>

int main() {
    int num, i, j, isPrime;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &num);

        if (num < 2) 
        {
            printf("%d is not a prime number.\n", num);
            continue;
        }

        isPrime = 1; 

        for (j = 2; j <= num / 2; j++) 
        {
            if (num % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
