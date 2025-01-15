#include <stdio.h>
#include <stdlib.h>


int main ()
{

 /////////////array---Finding Maximum Value in Array.......................... 
 /*
 int num[7]={1,4,0,2,9,4,5};    
 int max=num[0];

  for (int i = 1; i < 7; i++)
  {
    if (num[i]>max)
    {
        max=num[i];
    }
    
  }
  printf("Max=%d",max);
 */
/////////////array---Finding Maximum Index in Array.......................... 
/*
int num[7];    
for (int i = 0; i < 7; i++)
{
 printf ("Please enter the value index number %d:",i); scanf("%d",&num[i]);
}
int max=num[0],maxindex=0;
 for (int i = 1; i < 7; i++)
 {
   if (num[i]>max)
   {
       max=num[i];
       maxindex=i;
   } 
 }
 printf("Max=%d\n",max);
 printf("Max Index=%d",maxindex);
*/
/////////////array---Good Multiplication Neighbors.......................... 
/*
int num[7]={5,6,2,3,6,2,9};
int ind=0;
for (int i = 0; i < 6; i++)
 {
     if (num[i]*num[i+2]==num[i+1])
  {
   ind=1; break;
  }
 }

if (ind==1)
  {
   printf ("Good Neighbor");
  }
else printf ("NOT Good Neighbor");
*/
/////////////array--- Initializing Printing 2D Array.......................... 
/*
//int myArray [3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//int myArray [3][4]={{1,5},{1,2,3,4},{5,6,7,8}};
int myArray [3][4]={1,0,5,0,6,9,0,0,6};
for (int i = 0; i < 3; i++)
{
  for (int j = 0; j < 4; j++)
  {
    printf("%d  ",myArray[i][j]);
  }
  printf("\n");
}
*/
/////////////array---Multiplication Table Solution.......................... 
 /*
  //     1 2  3   4  5  6  7  8  9  10
  //1    1 2  3   4  5  6  7  8  9  10
  //2    2 4  6   8  10 12 14 16 18 20
  //3    3 6  9   12 15 18 21 24 27 30
  //4    4 8  12  ....................
  //5    5 10 15  ....................
  //6    6 12 18  ....................
  //7    7 14 21  ....................
  //8    8 16 24  ....................
  //9    9 18 27  ....................
  //10  10 20 30  ....................

  int MT[10][10];
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      MT[i][j]=(i+1)*(j+1);
      printf("%2d  ",MT[i][j]);
    }
    printf("\n");
    
  }
  */
  /////////////array---Input to Element in a 2D Array.......................... 
   /*
  double num[2][3];
  for (int i = 0; i < 2; i++)
  {
     for (int j = 0; j < 3; j++)
     {
      printf("Please Enter Element number [%d][%d] ",i,j);  scanf("%lf",&num[i][j]);
     }
  }
  
   for (int i = 0; i < 2; i++)
 {
    for (int j = 0; j < 3; j++)
    {
     printf("%.2lf ",num[i][j]);
    }
    printf("\n");
 }
   */
  /////////////array---Physical Representation in Memory-1D.......................... 
   /*
   int num[5];
   printf("Address=%lu\n",&num[0] ); 
    printf("Address=%lu\n",&num[1] ); 
     printf("Address=%lu\n",&num[2] ); 
      printf("Address=%lu\n",&num[3] ); 
       printf("Address=%lu\n",&num[4] ); 
        printf("Address=%lu\n",&num[5] ); 
    */
   
  /////////////array---Physical Representation in Memory-2D.......................... 
    /*
    int num[3][4];
     
     for (int i = 0; i < 3; i++)
     {
       for (int j = 0; j < 4; j++)
       {
         printf("%lu  ",&num[i][j] ); 
       }
        printf("\n");
     }
       */
  /////////////POINTER--- pointer..........................   
     int grade1=50,grade2=80;
     printf("grade 1 value=%d\n",grade1);
      printf("grade 1 address=%p\n",&grade1);
     printf("grade 2 value=%d\n",grade2);
      printf("grade 2 address=%p\n",&grade2); 


    



















/////////////array---                       .......................... 


















/////////////array---                       .......................... 



    return 0;
}