#include <stdio.h>
#include <stdlib.h>


 /////////////POINTER---Pass by Reference FULL EXAMPLE.......................... 

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
    // No need for any return
}


int main ()
{
/////////////POINTER---Pass by Reference FULL EXAMPLE.......................... 
  /*
    int a = 5, b = 7;
    int max, min;
    findMinMax(a, b, &max, &min);
    printf("max between %d and %d = %d\n", a, b, max);
    printf("min between %d and %d = %d\n", a, b, min);
  */
/////////////Arrays---Arrays Copying an Array Question.......................... 

  int date [3]={1,2,2000};
  int date2[3];
 
 for (int i = 0; i < 3; i++)
 {
 printf ("%d ",date [i]);  date2[i]=date[i];
 }
printf ("\n"); 
 
for (int i = 0; i < 3; i++)
{
printf ("%d ",date2 [i]); 
}
    
  




    return 0;
} 