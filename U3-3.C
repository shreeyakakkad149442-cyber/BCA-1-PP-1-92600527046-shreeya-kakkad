// wap that input age from user and check eligibility for voting

#include <stdio.h>
#include <conio.h>

void main()
{
    int a;

    clrscr();

    printf("\n Enter your age : ");
    scanf("%d", &a);

    if (a >= 18)
    {
        printf("\n You are eligible for voting");
    }
    else
    {
        printf("\n You are not eligible for voting");
    }

    getch();
}