#include <stdio.h>
#include <stdlib.h>
#define s 8


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
/*
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
  */  
/////////////Arrays---Array Palindrome..........................
/*
 int arr[s]={8,5,7,2,2,7,5,8};
 int count=0;
 for (int i = 0; i < s/2; i++)
 {
   if (arr[i]==arr[s-1-i]) count++; 
 }

 if (count ==s/2) printf("Array is Palindrome");
 else printf("Array is NOT Palindrome");
*/
/////////////Arrays---Arrays Largest Neighbors Sum ..........................
 
 int arr[5]={1,4,6,7,51};
 int sum,maxsum=0;
 for (int i = 0; i < 4; i++)
 {
  sum=arr[i]+arr[i+1];
  if (sum>maxsum){maxsum=sum;}
 }
 
 printf("Largest Neighbors Sum=%d",maxsum);
 








    return 0;
} 