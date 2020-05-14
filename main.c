#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>
//#define MAX 2
 
struct student
{
    int ID;
    int roll_no;
    float marks;
};

//ricerca studente migliore 
void best(struct student arr_student[], int max)
{
  int max_n=0, curr_num; 
  for(int i = 0; i < max; i++ )
  {
    for(int j = 0; j < max; j++)
    {
      if(arr_student[j].marks > max_n)
      {
        max_n = arr_student[j].marks;
        curr_num = j;  
      }
    }
  }
  printf("The best student is %d", arr_student[curr_num].ID); 
}



int main()
{
  int max; 
    printf("Insert the number of students..\n > " );
    scanf("%d", &max);  
    struct student arr_student[max];
    int i;
 
    for(i = 0; i < max; i++ )
    {
        printf("\nEnter details of student %d\n\n", i+1);
 
        //printf("Enter name\n > ");
        //scanf("%d", arr_student[i].ID);
        //input ID 
        srand(time(NULL));
        arr_student[i].ID = rand()%100; 
        
 
        //printf("Enter roll no\n > ");
        //scanf("%d", &arr_student[i].roll_no);
        //input roll number 
        arr_student[i].roll_no = i; 
 
        //printf("Enter marks\n > ");
        //scanf("%f", &arr_student[i].marks);
        //input marks 
        arr_student[i].marks = rand()%10; 

      
    }
 
    printf("\n");
 
    printf("Name\tRoll no\tMarks\n");
 
    for(i = 0; i < max; i++ )
    {
        printf("%d\t%d\t%.2f\n",
        arr_student[i].ID, arr_student[i].roll_no, arr_student[i].marks);
    }

    best(arr_student, max); 

    
 
    
    return 0;
}