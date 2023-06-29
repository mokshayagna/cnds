#include <stdio.h>

int countbits(int a)
{
    int count = 0;
    int i;

    for(i = 7; i >= 0; i--)
    {
        int bit = (a >> i) & 1;
        printf(" %d", bit);

        if (bit == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int x = 10;
    int onescount= countbits(x);

    printf("\nNumber of 1's printed: %d\n", onescount);

    return 0;
}


