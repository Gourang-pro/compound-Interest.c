#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
    {
        float principal, rate, year, ci;

        printf("enter principal :");
        scanf("%f",&principal);
        printf(" enter the rate :");
        scanf("%f",&rate);
        printf(" enter time in the year :");
        scanf("%f",&year);

        ci = principal * ((pow((1+ rate/100),year)-1));
        printf("compound interest is : %f\n",ci);
        return 0;
    }