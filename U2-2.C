//arithmatic operation
#include<stdio.h>
#include<conio.h>

void main()
{

     float pa,r,y,si;
     clrscr();


     printf("enter value of principle amount:") ;
     scanf("%f" ,&pa);

     printf("rate of rate of interest:");
     scanf("%f" ,&r);

     printf(" number of years :");
     scanf("%f" , &y);

     si=(pa*r*y)/100;
     printf("**************************");
      printf("\n principle amount:%f",pa) ;
     printf("\n rate of rate of interest:%f",r);
     printf(" number of years :%f",y);
     printf("**************************");

     printf("\n simple interest is %f",si);
     getch();



}