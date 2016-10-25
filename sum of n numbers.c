/*
Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 08
Program : Write a program to print sum of n natural number.
Date : 2016-10-258
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
    int main(){
    int i=0,sum=0,n;

    printf("\nEnter any number :\n");
    scanf("%d",n);

    do {
        sum+=i;
    printf("\nSum of numbers is :%d",sum);
    i++;
    }while(i<n);
    getch();
    return 0;

    }
