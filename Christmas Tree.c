#include <stdio.h>

int main()
{
    int n = 6;
    int space;

    for(int i = 1, k = 0; i <= n; ++i, k = 0)
    {
        for(space = 1; space <= n-i; ++space)
        {
            printf(" ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }    
    return 0;
}