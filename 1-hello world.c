#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("Hello perfect word \n");
  // printf("  *\n ***\n*****\n");
  //  printf(" Calculation\n");  
  //  printf (" 5+2=%d\n 5-2=%d\n 5/2=%d\n 5%%2=%d\n",5+2,5-2,5/2,5%2);
  //   printf (" \n **********\n **********\n **********\n **********\n **********\n ");
  //    printf (" \n 1*********\n 12********\n 123*******\n 1234******\n 12345*****\n");
  //     printf (" \n *     *\n  *   * \n   * *  \n    *   \n   * *  \n  *   * \n *     *\n");
  //     printf ("I was born:%d\n",2024-40);  
  //     int grade1;
  //     int grade2;
  //     scanf("%d",&grade1);
  //      scanf("%d",&grade2);
  //      printf("Average=%d\n",(grade1+grade2)/2);
  //      printf("Please enter below info\n");
  /////////////new challenge.................
      //  int cy;
      //  int ya;
      //  printf("Current year:");  scanf("%d",&cy); 
      //  printf("Your age:");  scanf("%d",&ya); 
      //  printf("Year you were born:%d\n",cy-ya);
   /////////////new challenge.................
      //  double height,width;
     //   printf("Rectange height:");  scanf("%lf",&height); 
      //  printf("Rectange width:");  scanf("%lf",&width); 
     //   printf("Rectange Area:%.2lf\n",height*width);     

   /////////////casting.................
    //  int num1=5,num2=2;
    //  double result;
    //  result=num1/(double)num2;   //puting double here is casting
    //  printf("result=%lf\n",result);
   /////////////casting chalenge 1............
        //  int grade1,grade2,grade3;
        //  printf("Enter grade1:");  scanf("%d",&grade1); 
        //  printf("Enter grade2:");  scanf("%d",&grade2); 
         // printf("Enter grade3:");  scanf("%d",&grade3); 
        // // printf("Average of grades:%.2lf\n",((double)grade1+grade2+grade3)/3); //or
        //   printf("Average of grades:%.2lf\n",(grade1+grade2+grade3)/3.0); //or
   /////////////Milestone 2 Weather Station A
     //    double temc,temf;
      //   printf("Enter Celsius:");  scanf("%lf",&temc); 
     //    printf("fahrenheit Degree:%.2lf\n\n",temc*1.8+32); 

     //    printf("Enter fahrenheit:");  scanf("%lf",&temf); 
     //    printf("Celsius Degree:%.2lf\n",(temf-32)/1.8); 

   /////////////swap ............
    /*    int a=10;
       int b=20;
       int temp;
       printf("\nBefore swap\n");
       printf("a=%d\n",a);
       printf("b=%d\n",b);
        printf("\nAfter swap\n");
        temp=a;
        a=b;
        b=temp;
       printf("a=%d\n",a);
       printf("b=%d\n",b);
    */
     /////////////Arithmetic Sequence  ............  
    /* float a1,d,an;
      int n;
      printf("\n Enter the first term of sequence:");  scanf("%f",&a1);
       printf("\nEnter the distance:");  scanf("%f",&d);
        printf("\nEnter the number of sequence:");  scanf("%d",&n);
     
      an=a1+(n-1)*d;
      printf("\nan=%f",an);
      */
     /////////////Arithmetic SUM Sequence  ............  
     /* float a1,an;
      int n;
      printf ("Please enter n-element:"); scanf("%f",&an);
      printf ("Please enter initial term:"); scanf ("%f",&a1);
      printf ("Pleas enter Total terms:"); scanf("%d",&n);
      printf("sum of sequence=%f",(a1+an)*n/2);
      */
     /////////////Arithmetic calculate salary  ............
      /*
        float salaryperhour,totalhours;
       printf ("Enter salary per hours:"); scanf ("%f",&salaryperhour);
       printf ("Enter totalhours:"); scanf ("%f",&totalhours);
       printf("Your salary:%.2f",salaryperhour*totalhours);

     */
     /////////////Arithmetic driving time  ............
     
       double second,speed,distance;
       printf ("Enter speed:"); scanf ("%lf",&speed);
       printf ("Enter distance:"); scanf ("%lf",&distance);
       second=distance/(speed/3600);
       printf("Driving time=%d:%d:%d\n",(int)second/3600,((int)second-(((int)second/3600)*3600))/60,  (int)second-( (((int)second/3600)*3600)+((((int)second-(((int)second/3600)*3600))/60)*60) ));






   



  



   return 0;
}