#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int  main()
{
    int  k,l,m,n,w,x,y,z;

    printf("\t     Prove that you are not a robot \n");

    printf("Give the solution for the given equation  5*3+7-1 :");

    scanf("%d",&k);

    printf("\nHow many 9's are in the given number 2598793492549 :");

    scanf("%d",&l);

    printf("\nFind the number of words named 'car' in the following line: 'Car is a fourwheeler and car is a land transport and car runs on gasoline'.");

    scanf("%d",&m);

    printf("\nFind the upcoming number in the given sequence: 1,3,6,_:");

    scanf("%d",&n);

    printf("\nHow many odd numbers are in the given number 9848236175 :");

    scanf("%d",&w);

    printf("\nWhat is the square root of the given nummber 1369 :");

    scanf("%d",&x);

    printf("\nWhat is the cube of the given number 4 :");

    scanf("%d",&y);

    printf("\nWhat is the first five digit number :");

    scanf("%d",&z);

    if(k==21 && l==4 && m==3 && n==10 && w==5 && x==37 && y==64 && z==10000)
    {
        printf("\nCongrats buddy!!You are not a robot\n");
    }
    else
    {
        printf("\nSorry buddy. You are a robot\n");
    }
}