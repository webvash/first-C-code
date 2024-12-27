#include <stdio.h>
#include <stdlib.h>


int main ()
{

 /////////////function---Finding Maximum Value in Array.......................... 
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



    return 0;
}