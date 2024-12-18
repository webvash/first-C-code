#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  // printf("Hello perfect word \n");
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
      /*
       double second,speed,distance;
       printf ("Enter speed:"); scanf ("%lf",&speed);
       printf ("Enter distance:"); scanf ("%lf",&distance);
       second=distance/(speed/3600);
       printf("Driving time=%d:%d:%d\n",(int)second/3600,((int)second-(((int)second/3600)*3600))/60,  (int)second-( (((int)second/3600)*3600)+((((int)second-(((int)second/3600)*3600))/60)*60) ));
       */
       /////////////Arithmetic Convert Seconds into Hours Minutes and Seconds ............
       /*
       int second,minute,hour;
       printf("Enter seconds:"); scanf("%d",&second);
       printf("Hours:%d \nMinutes:%d \nSeconds:%d \n",second/3600,(second-(second/3600)*3600)/60,(second-(second/3600)*3600)%60);
         */  
      /////////////Arithmetic Removing Decimal Part from an Integer............
      /* double data;
       printf ("Enter data:"); scanf ("%lf",&data);
       printf ("Removing Decimal Part from an Integer:%.02lf",data-(int)data); 
       */
      /////////////Arithmetic Sum of Triple Digits............
      /* int num,digit1,digit2,digit3;
       printf ("Enter Number:"); scanf ("%d",&num);
        digit1=num*.01;
         digit2=(num*.1)-(digit1*10);
         digit3=num-(digit1*100)-(digit2*10);
       printf("Sum of Triple Digits=%d",digit1+digit2+digit3);
        */
      /////////////Arithmetic Reversed Number...........
      /*
         int num,digit1,digit2,digit3,Reversednum;
       printf ("Enter Number:"); scanf ("%d",&num);
        digit1=num*.01;
         digit2=(num*.1)-(digit1*10);
         digit3=num-(digit1*100)-(digit2*10);
          Reversednum=digit3*100+digit2*10+digit1;
       printf("Reversed Number=%d",Reversednum);
       */
       /////////////Arithmetic Distance Between 2 Points .................
       /* int x1,y1,x2,y2;
        double d;
       printf ("Enter x1:"); scanf ("%d",&x1);
       printf ("\nEnter y1:"); scanf ("%d",&y1);
       printf ("\nEnter x2:"); scanf ("%d",&x2);
       printf ("\nEnter y2:"); scanf ("%d",&y2);
       d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
       printf("Distance Between 2 Point=%.2lf",d);
      */
       /////////////Arithmetic Efficient Calculation .................
      /*
       int x,y;
       printf("\nEnter number X="); scanf("%d",&x);
       printf("\n X^2=%d",y=x*x);
       printf("\n X^4=%d",y=y*x*x);
        printf("\n X^6=%d",y=y*x*x);
         printf("\n X^8=%d",y=y*x*x);
       */
       /////////////Control Flow- Finding Maximum between 2 numbers.................
       /*
        int num1,num2;
        printf("Enter num1:");scanf("%d",&num1);
        printf("Enter num2:");scanf("%d",&num2);
        if (num1>num2) printf("\nnum1 is grater than num2");   
        else printf("\nnum2 is grater than num1");
       */
       /////////////Control Flow- Find if number is Odd or Even.....................
        /*
         int num;
        printf("Enter num:");scanf("%d",&num);
        if (num%2==0) printf("\n%d is even",num);   
        else printf("%d is odd",num);
        */
         /////////////Control Flow-print MIN and MAX....................
          /*
        float num1,num2;
        printf("Enter num1:");scanf("%f",&num1);
         printf("Enter num2:");scanf("%f",&num2);
        if (num1>num2) printf("\nMaximum%.2f\nMinimum%.2f",num1,num2);   
        else printf("\nMaximum%.2f\nMinimum%.2f",num2,num1); 
        */
         /////////////Control Flow-min max among 3 numbers....................
          /*
      float num1,num2,num3;
        printf("Enter num1:");scanf("%f",&num1);
         printf("Enter num2:");scanf("%f",&num2);
          printf("Enter num3:");scanf("%f",&num3);
          if (num1>num2 && num2>num3) printf("\nMaximum=%.2f\nMinimum=%.2f",num1,num3);
           if (num1>num3 && num3>num2) printf("\nMaximum=%.2f\nMinimum=%.2f",num1,num2);
            if (num2>num1 && num1>num3) printf("\nMaximum=%.2f\nMinimum=%.2f",num2,num3);
             if (num2>num3 && num3>num1) printf("\nMaximum=%.2f\nMinimum=%.2f",num2,num1); 
              if (num3>num1 && num1>num2) printf("\nMaximum=%.2f\nMinimum=%.2f",num3,num2); 
               if (num3>num2 && num2>num1) printf("\nMaximum=%.2f\nMinimum=%.2f",num3,num1); 
          */
         /////////////Control Flow-Milestone Intermediate Calculator using Switch Case...........
         /*
          char operator;
          int num1,num2;
            printf("Enter operator:");scanf("%c",&operator);

        printf("Enter num1:");scanf("%d",&num1);
         printf("Enter num2:");scanf("%d",&num2);
         
         switch (operator)
         {
        case '+':
          printf("sum of 2 number is:%d",num1+num2);
          break;          
        case '-':
          printf("minus of 2 number is:%d",num1-num2);
          break;
        case '/':
        if (num2!=0){  printf("division of 2 number is:%d",num1/num2);}
              else printf("Please do not enter num2=0");

          break;
        case '%':
          printf("reminder of 2 number is:%d",num1 % num2);
          break;     
        case '*':
          printf("multiplication of 2 number is:%d",num1 * num2);
          break;     
        default:  printf("Please Enter valid operant.");
          break;
         }
        */
         /////////////Control Flow-Check if Numbers are the same................
          /*
        int num1,num2;
         printf("Enter num1:");scanf("%d",&num1);
         printf("Enter num2:");scanf("%d",&num2);
         if (num1==num2) printf ("True");
         else printf("False");
            */
         /////////////Control Flow--Check if a number is double digit or triple digit................
         /*
         int num;
         printf("Enter num:");scanf("%d",&num);
         if (num>=10 && num<=99) printf ("Double digit");
         else if (num>=100 && num<=999) printf ("Triple digit");
         else printf("Neither Double/Triple");
            */
         /////////////Control Flow--Print the Absolute Number ................
         /*
         int num;  
         printf("Enter num:");scanf("%d",&num);
         if (num>=0) printf ("absolute value=%d",num);
         else if (num<0) printf ("absolute value=%d",num*-1);
         */
         /////////////Control Flow--Quadrant of a Point .....................
         /*
         int x,y;
         printf("Enter X:");scanf("%d",&x);
         printf("Enter Y:");scanf("%d",&y);
         if (x>0 && y>0) printf ("Quadrant 1");
         else if (x<0 && y>0) printf ("Quadrant 2");
         else if (x<0 && y<0) printf ("Quadrant 3");
         else if (x>0 && y<0) printf ("Quadrant 4");
         else printf ("on lines");
                 */
         /////////////Control Flow--Month Number to Month Name.....................  
          /*
         int num;
         printf("Enter the number of month:");scanf("%d",&num);
           switch (num)
           {
           case 1:  printf("%d --> January:",num); break;
           case 2:  printf("%d --> February:",num); break;
           case 3:  printf("%d --> March:",num); break;
           case 4:  printf("%d --> April:",num); break;
           case 5:  printf("%d --> May:",num); break;
           case 6:  printf("%d --> June:",num); break;
           case 7:  printf("%d --> July:",num); break;
           case 8:  printf("%d --> August:",num); break;
           case 9:  printf("%d --> September:",num); break;
           case 10:  printf("%d --> October:",num); break;
           case 11:  printf("%d --> November:",num); break;
           case 12:  printf("%d --> December:",num); break;

           default:  printf("Please enter a number between 1 to 12",num); break;
            break;
           }  
             */
            /////////////Control Flow--Unique Clock Representation  ..................... 
             /*
            int second,minute,hour; char h,m,s;
            printf("Enter seconds:");scanf("%d",&second);
            hour=second/3600;
            minute=(second-(hour*3600))/60;
            second=(second-(hour*3600))%60;
            if (hour<10) 
               h='0';
            if (minute<10) 
               m='0';
             if (second<10) 
               s='0';
            printf ("%c%d : %c%d : %c%d",h,hour,m,minute,m,second);
           */
            /////////////Control Flow--Divisible 3 Numbers..................... 
            /*
            int x,y,z;
         printf("Enter X:");scanf("%d",&x);
         printf("Enter Y:");scanf("%d",&y);
         printf("Enter z:");scanf("%d",&z);
         if (x==0 || y==0 || z==0) printf("Cannot divided by 0-please enter other number");
         else if ((x%y==0 || y%x==0) && (x%z==0 || z%x==0)  && (y%z==0 || z%y==0) ) printf ("Divisible");
         else printf ("NON-Divisible");
                  */
          /////////////Control Flow--Is Leap Year..................... 
          /*
          int year;
         printf("Enter year:");scanf("%d",&year);
          if(year%4==0 && (year%100!=0 || year%400==0)) printf("%d is a leap year",year);
          else printf("%d is NOT a leap year",year);
            */
         /////////////Control Flow--Find the next day on Calendar ..................... 
          /*
         int year,month,day,m=0;
         printf("Enter year:");scanf("%d",&year);
          printf("Enter month:");scanf("%d",&month);
           printf("Enter day:");scanf("%d",&day);
           day++;

           switch (month)
           {
             case 1:  case 3: case 5: case 7: case 8: case 10: case 12:   //31 days
               if (day>31){ month++; day=1;  if (month>12) {year++; month=1;}}
               break;

             case 4: case 6: case 9: case 11:   //30 days
              if (day>30){ month++; day=1;  if (month>12) {year++; month=1;}  }
              break;
           
             default: //case 2 (28 or 29) days
                 if(year%4==0 && (year%100!=0 || year%400==0)) //leap year
                  {
                    if (day>29){ month++; day=1;  if (month>12) {year++; month=1;}  }
                  }
                 else //not-leap year
                   {
                     if (day>28){ month++; day=1;  if (month>12) {year++; month=1;}  }
                   }
               break;
           }
           printf("Next day=%d %d %d",day,month,year);
            */
            /////////////Change number--Program to Print a Date In Hexadecimal.................... 
            /*
            int year,month,day;
             printf("Enter year:");scanf("%d",&year);
              printf("Enter month:");scanf("%d",&month);
               printf("Enter day:");scanf("%d",&day);
            
             printf("year:0X%x",year);
             printf("\nyear:0X%x",month);
             printf("\nyear:0X%x",day);
             
            */
            /////////////Change number--check if an input is Lower Upper Case Letter or Digit.................... 
             /*
            //my soloution
             char ch;
             printf ("Enter a character: "); scanf("%c",&ch);
             int in=("%d",ch);
            // printf ("%d",in);
             if (in>=48 && in<=57) printf ("%c is a Digit",ch);
              else if (in>=65 && in<=90) printf ("%c is a Uppercase Letter",ch);
               else if (in>=97 && in<=122) printf ("%c is a Lowercase Letter",ch);
                  else  printf("%c is Other",ch);
                */
             //teacher solution
               /*
                char myCharacter;
                 printf("Enter character: ");
                 scanf("%c", &myCharacter);

                 if (myCharacter >= 'A' && myCharacter <= 'Z')
                     printf("It's a uppercase!\n");
                  else if (myCharacter >= 'a' && myCharacter <= 'z')
                     printf("It's a lowercase!\n");
                  else if (myCharacter >= '0' && myCharacter <= '9')
                    printf("It's a digit!\n");
                  else
                    printf("Other..!\n"); 
               */
                      

       /////////////Loops--Printing any number of asterisks.................... 
       /*
         int num,count=1;
             printf ("Enter the number: "); scanf("%d",&num); 
               while (count<=num)
               {
                  printf ("*");
                  count++;
               }
        */
       /////////////Loops-- Adding Pow to Calculator..........................
         /*
          int num,pow,num1,count=1;
             printf ("Enter the number: "); scanf("%d",&num); 
              printf ("Enter the power: "); scanf("%d",&pow); 
              num1=num;
               while (count<pow)
               {
                  count++;
                  num=num*num1;
               }
               printf ("%d in the power %d= %d",num1,pow,num);
                        */
       /////////////Loops--Milestone 1 Coolest Average Grade Calculator..........................     
          /*
          int count=-1;
           double  num,num1;
           
              printf ("Enter grades (when finish enter -1)= ");
               
               while (num!=-1)
               {
                   num1=num1+num;
                   scanf("%lf",&num); 
                  
                  count++;
                 
               }

               printf ("Average= %lf",num1/count);
                */
       /////////////Loops--Enter a legal grade..........................  
       int grade;
        do {
             printf("Enter a grade:"); scanf ("%d",&grade);

            }
            while (grade<0 || grade>100);
         printf("Thanks! You have inserted %d,which is legit grade",grade); 







      
  



   return 0;
}