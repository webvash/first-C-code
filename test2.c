#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calculateArea(int h,int w)
 {
   float a;
   a=h*w;
   return a;

 }

 void TwoMaximumDIGITina2digitsnumber(int num)
 {
    if (num>=10 && num<100)
    {
       int l,r;
       l=num/10; r=num%10;
      
    
       if (l>r) printf("Max digit=%d",l);
       else if (l<r)  printf("Max digit=%d",r);
        else  printf("Bothe number are equal");
        
    }
    else printf("Please enter 2 digte number");

 }

 int Factorial ()
  { 
    int num,num1=1;
    printf("Enter the number:"); scanf("%d",&num);
    if (num >=0)
    {
      
      for (int i=num; i>0 ; i--)
      {
        num1=num1*i;
      }
    }
   else num1=-1;

    return num1;
  }

  long long Ninenumber (int num)
  { long long a=0;
    for (int i = 0; i < num; i++)
    {
      a=10*a+9;
    }
    return a;

  }

   long long GenerationofNumbers123seqlength (int num)
  { long long a=0;
    if (num<=9)
    {
        for (int i = 1; i <= num; i++)
         {
          a=10*a+i;
         }
        return a;
    }
    a=Ninenumber (num);
    return a;
  }

  char toLower(char ch)
   {
     if (ch>='A' && ch<='Z' )
     {
       ch=ch+32;
       return ch;
     }
     
    return '1';    
   }

 char toUpper(char ch)
  {
    if (ch>='a' && ch<='z' )
    {
      ch=ch-32;
      return ch;
    }
    
   return '1';    
  }


 
 int CharsTo3DigitsInteger(char ch1,char ch2,char ch3)
  {
    if (ch1>='0' && ch1<='9' && ch2>='0' && ch2<='9' && ch3>='0' && ch3<='9')
      { int a=ch1-48; int b=ch2-48; int c=ch3-48;
         return a*100+b*10+c;
      }
    return 0;
  }

 
double AverageOfDigitsLess(int num,int digit)
  { int num1,count=0,num3=0;
     while (num>0)
     {
      num1=num%10;
      num=num*0.1;
      if (num1<digit) { count++;num3=num3+num1;}
     }
     printf ("number of less than digite=%d\n",count);
     return num3/(double)count;
  }

int SumOfDivisors(int num)
 { int sum=0;
   for (int i = 1; i<=(num/2); i++)
   {
    if (num%i==0)  sum=sum+i;
   }
   return sum+num;
 }

int SumOfdvisorsOptimized (int num)
 { int sum=0;
   for (int i = 1; i<=sqrt(num);  i++)
   {
    if (num%i==0) { sum=sum+i; if ( i!=sqrt(num)) {sum=sum+num/i;} }
   }
   return sum;
 }






int main ()
{
    /////////////function---Find Rectangle Area.......................... 
   /*
    int height,width;
    float area;
    printf("Enter height:"); scanf("%d",&height);
    printf("Enter width:"); scanf("%d",&width);

   area=calculateArea(height,width);
   printf("Arae=%f",area);
    */ 
    /////////////function---2 Maximum DIGIT in a 2 digits number.......................... 
    /*
    int num;
    printf("Enter number:"); scanf("%d",&num);

   TwoMaximumDIGITina2digitsnumber(num);
   */
/////////////function--- Calculate FACTORIAL.......................... 
/*
   printf("factorial is=%d",Factorial());
*/
/////////////function---Sequence of 9s.......................... 
  /*
   int num;
    printf("Enter number:"); scanf("%d",&num);
    printf("Sequence of 9s=%d",Ninenumber(num));
  */
/////////////function---Generation of Numbers 123 seq length..........................         
 /*
      int num;
  printf("Enter number:"); scanf("%d",&num);
  printf("Sequence=%lld",GenerationofNumbers123seqlength (num));               
  */
/////////////function---toLower ..........................  
   /*
    char ch;
  printf("Enter letter:"); scanf("%c",&ch);
  printf("toLower =%c",toLower (ch));     
     */
  /////////////function---toUpper .......................... 
   /*
  char ch;
    printf("Enter letter:"); scanf("%c",&ch);
    printf("toUpper =%c",toUpper (ch));     
   */
 /////////////function---Chars To 3 Digits Integer .......................... 
  /*
   char ch1,ch2,ch3;
  printf("Enter first char:"); scanf("%c",&ch1);
 printf("Enter second char:"); scanf(" %c",&ch2);          
 printf("Enter third char:"); scanf(" %c",&ch3);
  printf("3Digits=%d",CharsTo3DigitsInteger (ch1,ch2,ch3));     
     */  
 /////////////function---Amount And Average Of Digits Less Than Given Digit .......................... 
  /*
      int num,digit;
  printf("Enter the number:"); scanf("%d",&num);
 printf("Enter the digite:"); scanf(" %d",&digit);          
 
  printf("average=%lf",AverageOfDigitsLess (num,digit));     
  */
 /////////////function---Sum Of Divisors  .......................... 
   /*
  int num;
  printf("Enter the number:"); scanf("%d",&num);
   printf("Sum Of Divisor=%d",SumOfDivisors (num));         
 
  */
 /////////////function---Sum Of dvisors Optimized  .......................... 

  int num;
  printf("Enter the number:"); scanf("%d",&num);
   printf("Sum Of Divisor=%d",SumOfdvisorsOptimized (num));         



    return 0;
}






