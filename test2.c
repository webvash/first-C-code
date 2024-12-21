#include <stdio.h>
#include <stdlib.h>


float calculateArea(int h,int w)
 {
   float a;
   a=h*w;
   return a;

 }

int main ()
{
    /////////////function---Find Rectangle Area.......................... 
    int height,width;
    float area;
    printf("Enter height:"); scanf("%d",&height);
    printf("Enter width:"); scanf("%d",&width);

   area=calculateArea(height,width);
   printf("Arae=%f",area);

    return 0;
}






