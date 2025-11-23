#include<stdio.h>
int main()
{
 int pass,newpass,choice;
 char name[10];
  
  while (1)
  {
    printf("------Digital Safe Lock System------\n");
    printf("1. Sign up\n2. Login in\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if (choice == 1)
   {
     printf("Enter your name: ");
     scanf("%s",name);
     printf("WELCOME %s\n",name);
     printf("Your default password is: 1234\n");
     printf("Please Login to continue.\n");
    }
    else if (choice == 2)
    {
      printf("Enter your password: ");
      scanf("%d",&pass);
      if (pass == 1234)
      {
        printf("LOGGED IN SUCCESSFULLY\n");
        printf("This is your first login.\nPlease change your default password to new password for securiy purposes\n");
        printf("Enter your NEW PASSWORD: ");
        scanf("%d",&newpass);
        printf("Your password has changed successfully.\nPlease login again to continue.\n");
      }
      else if (pass == newpass)
      {
        printf("You have logged in with new password.\n");
        printf("ACCESS GRANTED...!\n");
      }
      else 
      {printf("Enter valid password:\n");}
    } 
    else if (choice == 3)
    {
        printf("You are logging out.\nGOODBYE....");
        break;
    }
    else 
    {
        printf("Enter valid choice code:\n");    
    }
   }
   return 0;
}