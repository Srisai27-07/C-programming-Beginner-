#include<stdio.h>
struct book
{
    int chap,page;
    char name[50];
    char author[30];
    float price;
};

int main()
{
   int n,i;
   printf("Enter the number of books: ");
   scanf("%d",&n);
   
   struct book nbook[n];
   for(i=0;i<n;i++)
   {
     printf("Enter the name of the book %d: ",i+1);
     scanf("%s",nbook[i].name);
     printf("Enter the name of the author of the book: ");
     scanf("%s",nbook[i].author);
     printf("Entet the number of chapters the book has: ");
     scanf("%d",&nbook[i].chap);
     printf("Enter the maximum numebr of pages the book contains: ");
     scanf("%d",&nbook[i].page);
     printf("Enter the price of the book: ");
     scanf("%f",&nbook[i].price);
     printf("\n");
     printf("The name of the book is: %s\n",nbook[i].name);
     printf("The name of the author of the book is: %s\n",nbook[i].author);
     printf("The number of chapter this book contains is: %d\n",nbook[i].chap);
     printf("The maximum pages this book contains is: %d\n",nbook[i].page);
     printf("The price of the book is: %f\n",nbook[i].price);
   }
   return 0;

}
