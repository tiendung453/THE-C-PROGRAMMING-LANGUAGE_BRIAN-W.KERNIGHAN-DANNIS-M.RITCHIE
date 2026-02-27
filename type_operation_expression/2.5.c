#include<stdio.h>
#include<stdbool.h>

bool check(char c, char s[]);
int strPbrk(char *s, char *t);

int main()
{
    char s1[] = "abcdefghjik";
    char s2[] = "ibk";

    printf("%d", strPbrk(s1, s2));
    return 0;
}

bool check(char c, char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c) return true;
        ++i;
    }
    return false;
}

int strPbrk(char *s, char *t)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(check(s[i], t)) return i;
    }

    return -1;
}