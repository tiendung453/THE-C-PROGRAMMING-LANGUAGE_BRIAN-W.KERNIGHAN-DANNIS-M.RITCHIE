#include<stdio.h>
#include<stdbool.h>

void squeeze(char s1[], char s2[]);
bool check(char s[], char c);
int main()
{
    char s1[] = "abcdefghijk";
    char s2[] = "abcd";

    squeeze(s1, s2);
    printf("%s\n", s1);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j;
    for(i = j = 0; s1[i] != '\0'; i++)
    {
        if(!check(s2, s1[i]))
        {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}

bool check(char s[], char c)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == c) return true;
        ++i;
    }
    return false;
}