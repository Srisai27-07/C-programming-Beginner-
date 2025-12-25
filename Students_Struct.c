#include<stdio.h>
struct student
{
 int roll;
 char name[50],dept[50];
 float percent;
};

int main()
{
  int n,i,j;
  printf("Enter the number of students: ");
  scanf("%d",&n);
  struct student nstudent[n];
 
  for(i=0;i<n;i++)
  {
   printf("Enter the roll number of %d student: ",i+1);
   scanf(" %d",&nstudent[i].roll);
   printf("Enter the name of %d student: ",i+1);
   scanf(" %s",nstudent[i].name);
   printf("Enter the department of %d student: ",i+1);
   scanf(" %s",nstudent[i].dept);
   printf("Enter the percentage of %d student: ",i+1);
   scanf(" %f",&nstudent[i].percent);
   printf("===============================================\n");
  }
  printf("The information of the given student is sorted on basis of there percentage (lowest to highest):\n");
  struct student key;
   key = nstudent[i];
   for (i = 1; i < n; i++)
   {
 	key = nstudent[i];
 	j = i - 1;

	while (j >= 0 && nstudent[j].percent > key.percent)
	{
    	nstudent[j + 1] = nstudent[j];
    	j--;
	}
	nstudent[j + 1] = key;
   }

 
  for(i=0;i<n;i++)
  {
   printf("%-4d %-25s %-12s %8.2f\n", 
       i+1, nstudent[i].name, nstudent[i].dept, nstudent[i].percent);

  }
  return 0;
}
