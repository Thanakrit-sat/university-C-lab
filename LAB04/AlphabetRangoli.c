#include <stdio.h>

int main()
{
    int buff, n, q=0,w=0,a=0,b=1,c=98,r=0,rr=0;
    scanf("%d", &buff);
    n = 122 - (26 - buff);

    if (buff>26 || buff<=0) printf("-");
    else
    {
        for (int k = 0; k < buff-1; k++)
        {
            for (int f = 0; f < (buff*2)-2*(k+1); f++)
            {
                printf("-");
            }
            for (int m = 0; m <= k*2; m++)
            {   
                if (m <= 0 || m >= k*2) printf("%c", n);
                else if (m<=k) printf("%c", n-m);
                else if (m>k) 
                {
                    printf("%c", n-q+w+1);
                    w++;
                }
                if (m < k*2) printf("-");
            }
            for (int f = 0; f < (buff*2)-2*(k+1); f++)
            {
                printf("-");
            }
            printf("\n");
            q++;
            w = 0;
        }
        
        for (int j = 0; j < buff; j++)
        {
            for (int f = 0; f <j*2; f++)
            {
                printf("-");
            }
            for (int m = buff*2-1; m > j*2; m--)
            {   
                if (m >= buff*2-1||m <= j*2+1) printf("%c", n);
                else if (a<buff-b) 
                {
                    printf("%c",n-a-1);
                    a++;
                }
                else 
                {
                    printf("%c", c+r);
                    r++;
                }
                if (m > j*2+1) printf("-");
            }
            rr++;
            a=0;
            r=0;
            r+=rr;
            b++;
            for (int f = 0; f <j*2; f++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
}