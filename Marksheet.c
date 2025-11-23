//ASSIGNMENT 4: STUDENT MARKSHEET
//NAME: Srisai Sriniwas Atipamulu
//PRN: 125B1B186

#include <stdio.h>

int main() 
{
    char *subjects[5] = {"Physics", "Chemistry", "Mathematics", "English", "Computer"};
    int marks[5];
    int i;
    float total = 0, percent;
    char name[30];
    double prn;

    printf("===========================================\n");
    printf("                  MARKSHEET                \n");
    printf("===========================================\n");

    printf("STUDENT's NAME: ");
    scanf("%29s", name);

    printf("PRN: ");
    scanf("%lf", &prn);

    printf("-------------------------------------------\n");
    printf("SUBJECT                (marks out of 100)\n");
    printf("-------------------------------------------\n");

    for (i = 0; i < 5; i++) 
    {
        do 
        {
            printf("%s : ", subjects[i]);
            scanf("%d", &marks[i]);
            if (marks[i] < 0 || marks[i] > 100)
                printf("Please enter correct marks (0 to 100).\n");
        } while (marks[i] < 0 || marks[i] > 100);
        total += marks[i];
    }

    percent = (total / 500) * 100;

    printf("-------------------------------------------\n");
    printf("Total Marks    : %.0f / 500\n", total);
    printf("Percentage     : %.2f %\n", percent);

    printf("Result         : ");
    if (percent < 40.00)
        printf("Fail\n");
    else if (percent < 55.00)
        printf("Third Class\n");
    else if (percent < 65.00)
        printf("Second Class\n");
    else if (percent < 80.00)
        printf("First Class\n");
    else if (percent < 95.00)
        printf("Distinction\n");
    else
        printf("Extra Ordinary\n");

    printf("===========================================\n");

    return 0;
}
