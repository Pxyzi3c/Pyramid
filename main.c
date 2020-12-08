#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

int main()
{
    int n, i, j;
    p("How many rows do you want for your pyramid?\n");
    s("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<= 2*n-1; j++)
        {
            if(j >= n-(i-1) && j <= n+ (i-1))
            {
                p("*");
            }
            else
                p(" ");
        }
        p("\n");
    }
    return 0;
}
