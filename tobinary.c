#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
        int i,check,n = 0 ;

        printf("Enter a possitive integer to turn to digital form:\n");

        scanf("%d",&i);
        for( n = 0;check < i; n++)
        {
                check = pow(2.0,n) ;

        }

        printf("[dbg] 2^%d is the power of two higher than the nu.\n",n-1);

        return (0);
}

//just started this project,just on creating it yet.