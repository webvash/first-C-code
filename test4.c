#include <stdio.h>
#include <stdlib.h>
#define s 8
#define size 5


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
 /*
 int arr[5]={1,4,6,7,51};
 int sum,maxsum=0;
 for (int i = 0; i < 4; i++)
 {
  sum=arr[i]+arr[i+1];
  if (sum>maxsum){maxsum=sum;}
 }
 
 printf("Largest Neighbors Sum=%d",maxsum);
 */
 /////////////Arrays--- A Program to find if an Array is sorted ..........................
/*
 int arr[size];
 int Reallysorted=0,sorted=0,NOTsorted=0;
 for (int i = 0; i < size; i++)
 {
   printf("Please enter the value of array:"); scanf("%d",&arr[i]);
 }
 
 for (int i = 0; i < size-1; i++)
 {
         if (arr[i]<arr[i+1]) {Reallysorted++;}
         if (arr[i]==arr[i+1]) {sorted++;}
         if (arr[i]>arr[i+1]) {NOTsorted++; }   
 }
 
 if (sorted==0 && NOTsorted==0) printf("Reallysorted");
 if (sorted!=0 && NOTsorted==0) printf("sorted");
 if ( NOTsorted!=0) printf("NOTsorted");
 */
/////////////Arrays--- A Program to print and count all unique elements in an array..........................     
 /*
  int arr[10]={5,7,3,4,5,6,8,9,10,3};
  int count=0,count1=0;
   
  for (int i = 0; i < 10; i++)
  {
     for (int j = 0; j < 10; j++)
     {
      if (arr[i]!=arr[j])
      {
        count++;
      }
      
     }
     if (count==9){ printf("unique element=%d \n",arr[i]); count1++;}
     count=0;
  }
  printf("number of unique element=%d ",count1);
  */
  /////////////Arrays---A Program to count a total number of non unique values in an array..........................    
     
    int arr[10]={5,9,3,5,5,6,5,9,3,3},arr1[10]={0,0,0,0,0,0,0,0,0,0};
    int count=0,br=0;
     
    for (int i = 0; i < 10; i++)
    {  br=0;
       for (int j = 0; j < 10; j++)
       {
        
        if (arr[i]==arr[j] && i!=j )
        { 
          
           for (int i1 = 0; i1 < 10; i1++)
           {  
            if (arr1[i1]==arr[j]){br=1;}
           }

            if (br==0)
            {
             printf("NON-unique element=%d \n",arr[i]); count++;
             br=0; arr1[i]=arr[i];
            }
         }
                
        }
    }
   
    printf("number of NON-unique element=%d ",count);
    
    


























    return 0;
} 