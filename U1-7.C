#include<stdio.h>
#include<conio.h>

void main()
{
  int x=0,y=0,z=0;

  printf("enter value of x,y,z");
  scanf("%d%d%d" ,x,y,z);

  if(x>y &&x>z)
  {
    printf("x is maximum",x);
  }
  else if (y>x && y>z)
  {
      printf("y is maximum",y);
  }
   else
   {
      printf("%z is maximum",z);
   }q`

  getch();

}