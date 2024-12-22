#include <stdio.h>
#include <stdlib.h>


float calculateArea(int h,int w)
 {
   float a;
   a=h*w;
   return a;

 }

 void TwoMaximumDIGITina2digitsnumber(num)
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

  int Ninenumber (int num)
  { int a=0;
    for (int i = 0; i < num; i++)
    {
      a=10*a+9;
    }
    return a;

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

   int num;
    printf("Enter number:"); scanf("%d",&num);
    printf("Sequence of 9s=%d",Ninenumber(num));










    return 0;
}






