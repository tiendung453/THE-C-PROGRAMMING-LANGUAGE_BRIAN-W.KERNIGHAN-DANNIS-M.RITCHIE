#include<stdio.h>

int lower(char c);
int main()
{
    lower('B');
    return 0;
}

int lower(char c)
{
    c = (c >= 'A' && c <= 'Z')?(c += 32):c;
    printf("%c", c);
}