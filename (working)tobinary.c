#include <stdio.h>
#include<math.h>
// turning a possitive integer to its binary representation.

int main(void)
{
    int i,n,rm;

    printf("Enter a possitive integer\n");
    scanf("%d",&i);

    if(i == 0)
        printf("0");

    else if ( i == 1)
            printf("1");
    else
    {
        for( n = 0; pow(2.0,n) <= i; n++)
                        ;

        n--;

        while(n >= 0){

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
