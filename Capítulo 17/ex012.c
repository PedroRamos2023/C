#include <stdio.h>

char *binbin(int n);

int main()
{
    int bshift, x;

    printf("Type a value from 0 to 255: ");
    scanf("%d", &bshift);

    for (x = 0; x < 8; x++)
    {
        printf("%s\t%d\n", binbin(bshift), bshift);
        bshift = bshift >> 1;
    }
    return 0;
}

char *binbin(int n)
{
    static char bin[17];
    int i;

    for (i = 0; i < 16; i++)
    {
        bin[i] = n & 1 ? '1' : '0';
        n >>= 1;
    }
    bin[i] = '\0';
    return bin;
}
