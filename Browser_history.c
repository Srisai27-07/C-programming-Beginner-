#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void visitpage(int page)
{
    if(top >= 0 && stack[top] == page)
    {
        printf("Page number %d is the current page already.\n",page);
        return;
    }
    if(top == MAX-1)
    {
        printf("Page limit reached! Can not open new page!\n");
        return;
    }
    stack[++top] = page;
    printf("Page %d visited successfully!\n",page);
}

void goback()
{
    if(top == -1)
    {
        printf("No page to go back to.\n");
        return;
    }
    int curntpage = stack[top];
    top--;
    printf("Leaving page no %d.\n",curntpage);

    if(top >= 0)
    printf("Current page no: %d\n",stack[top]);
    else
    printf("No page to go back to!\n");
}

void dispcurnt()
{
    if(top == -1)
        printf("No page visited yet.\n");
    else
        printf("Current page: %d\n", stack[top]);
}

int main()
{
    int choice, page;
    printf("Select your choice:\n");
    printf("1. Visit a new page\n");
    printf("2. Go back\n");
    printf("3. Display current page\n");
    printf("4. Exit\n");

    while(1)
    {
        printf("Enter your choice number: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter the page number: ");
            scanf("%d",&page);
            visitpage(page);
        }
        else if(choice == 2)
        {
            goback();
        }
        else if(choice == 3)
        {
            dispcurnt();
        }
        else if(choice == 4)
        {
            printf("Exiting from the browser...!\n       Goodbye\n");
            break;
        }
        else
        printf("Invalid choice entered.\n");
    }
    return 0;
}
