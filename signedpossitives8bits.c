#include <stdio.h>
#include<math.h>
#include <stdlib.h>

//representing the possitive signed by having 1 in the most significant bit.
//for example +4 to be presented like 10000100.

int main(void)
{
        int i,j,n,rm;

        printf("Enter a possitive integer\n");
        scanf("%d",&i);

        if(i == 0)
                printf("0");
        else if  ( i < 0 )
        {
                printf("Number is not possitive.\n");
                exit(1);

        }
        else if (i >255)
        {
                printf("Too large.enter possitive between 0-255");
                exit(1);
        }
        else if ( i == 1)
                printf("1");
        else
        {
                for( n = 0; pow(2.0,n) <= i; n++)
                                ;

                rm = 8 - n;
                printf("1");
                rm --;
                for(j = 0; j < rm; j++)
                        printf("0");
                n--;
                while(n >= 0) {

                        if( i >= pow(2.0,n))
                        {
                                printf("1");
                                i = i % (int ) pow(2.0,n);
                                n--;
                        }
                        else if (i < pow(2.0,n))
                        {

                                printf("0");
                                n--;
                        }

                }

        }


    return 0;
}
