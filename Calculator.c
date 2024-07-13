#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int op, x1, x2,number;
    float res,sqrt,temp;
    char ch;
    do
    {
        printf (" Select an operation that you need to get executed: ");
        printf (" \n 1-Division  \t \t 2-Multiplication \n 3-Subtraction \t \t 4-Addition \n 5-Square root \t \t 6-Square \n 7-Exit \n \n Choose an operation that you need to get executed: ");

        scanf ("%d", &op);


    switch (op)
    {
        case 1:

            printf (" You chose the operation: Division");
            printf ("\n Provide the first Number: ");
            scanf (" %d", &x1);
            printf (" Provide the second Number: ");
            scanf (" %d", &x2);
            if (x2 == 0)
                {
                    printf (" \n Not possible when divisor is zero. Please provide another value ");
                    scanf ("%d", &x2);
                }
            res = x1 / x2;
            printf (" Division of the chosen two numbers is: %.2f", res);
            break;

        case 2:

            printf (" You chose the operation: Multiplication");
            printf ("\n Provide the first Number: ");
            scanf (" %d", &x1);
            printf (" Provide the second Number: ");
            scanf (" %d", &x2);
            res = x1 * x2;
            printf (" Multiplication of the chosen two numbers is: %.2f", res);
            break;

        case 3:

            printf (" You chose the operation: Subtraction");
            printf ("\n Provide the first Number: ");
            scanf (" %d", &x1);
            printf (" Provide the second Number: ");
            scanf (" %d", &x2);
            res = x1 - x2;
            printf (" Subtraction of the chosen two numbers is: %.2f", res);
            break;

        case 4:

            printf (" You chose the operation: Addition");
            printf ("\n Provide the first Number: ");
            scanf (" %d", &x1);
            printf (" Provide the second Number: ");
            scanf (" %d", &x2);
            res = x1 + x2;
            printf (" Addition of the chosen two numbers is: %.2f", res);
            break;

        case 5:

            printf (" You chose the operation: Square Root");
            printf ("\n Provide the first Number: ");
            scanf (" %d", &number);

            sqrt = number / 2;

            temp = 0;

            while(sqrt != temp){

            temp = sqrt;


           sqrt = ( number/temp + temp) / 2;
           }

           printf("The square root of '%d' is '%f'", number, sqrt);


        case 6:

            printf (" You chose the operation: Square");
            printf ("\n Provide the number to be squared: ");
            scanf (" %d", &x1);

            res = x1 * x1;
            printf (" Square of %d number is: %.2f", x1, res);
            break;



        case 7:
            printf (" You chose the operation: Exit the calculator");
            exit(0);
            break;

        default:
            printf(" Oops!! Something went wrong x_x ");
            break;
    }
    printf (" \n \n **************** \n ");
    } while (op != 7);

    return 0;
}
