#include<stdio.h>
#include<conio.h>
main()
{
    int bs;
    float da,ha,gs;
    printf("basic salary = Rs");
    scanf("%d",&bs);
    da=bs*40/100;
    ha=bs*20/100;
    gs=da+ha+bs;
    printf("dearness allowance = Rs %f \n house rent allowance = Rs %f \n gross salary = Rs %f",da,ha,gs);
    getch();
}




