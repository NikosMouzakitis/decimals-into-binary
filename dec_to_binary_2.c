#include <stdio.h>
#include<math.h>

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
        for( n = 0; pow(2.0,n) < i; n++)
        {
            //  printf("[dbg]:sigkrinw %f  me %d \n",pow(2.0,n),i);
        }
        //printf("[dbg]:n twra ison %d\n",n);
        //printf("[dbg]:2^%d = %1f is the one above power of %d\n",n,pow(2.0,n),i);



        n--;

        while(n >= 0)

        {
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
