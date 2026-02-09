#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int chr;
    bool flag = true;
    while (chr = getchar())
    {
        if(flag)
        {
            printf("\n");
            flag = false;
        }
        if(chr == 32) printf("\\b");
        else if(chr == '\t') printf("\\t");
        else if(chr == '\\') printf("\\\\");
        else printf("%c", chr);
    }
    return 0;

}