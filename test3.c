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















/////////////array---                       .......................... 


















/////////////array---                       .......................... 



    return 0;
}