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
    int num;
    printf("Enter number:"); scanf("%d",&num);

   TwoMaximumDIGITina2digitsnumber(num);







    return 0;
}






