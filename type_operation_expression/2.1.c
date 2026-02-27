#include <stdio.h>

int main()
{
    unsigned char uc = ~(unsigned char)0;
    unsigned short us = ~(unsigned short)0;
    unsigned int ui = ~(unsigned int)0;
    unsigned long ul = ~(unsigned long)0;

    printf("Unsigned char:  [0, %u]\n", uc);
    printf("Unsigned short: [0, %u]\n", us);
    printf("Unsigned int:   [0, %u]\n", ui);
    printf("Unsigned long:   [0, %lu]\n", ul);

    printf("Char:  [%d, %d]\n",
           -(int)(uc/2) - 1,
            (int)(uc/2));

    printf("Short: [%d, %d]\n",
           -(int)(us/2) - 1,
            (int)(us/2));

    printf("Int:   [%d, %d]\n",
           -(int)(ui/2) - 1,
            (int)(ui/2));

    printf("Long:   [%ld, %ld]\n",
           -(long)(ul/2) - 1,
            (long)(ul/2));

    return 0;
}