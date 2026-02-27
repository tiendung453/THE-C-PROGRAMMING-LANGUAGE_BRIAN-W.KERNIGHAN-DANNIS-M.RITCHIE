#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define MAX_LINE 1000
#define MAX_LINES 100

void reserve(char *original, char *copy);
int getLine(char s[], int lim);

int main()
{
    int len;
    char c[MAX_LINES];
    char copy[MAX_LINES];

    while ((len = getLine(c,MAX_LINES)) > 0)
    {
        reserve(c, copy);
        printf("%s\n", copy);
    }
    
}

int getLine(char s[], int lim)
{
    int c, i = 0;

    while (i < lim - 1 &&
           (c = getchar()) != EOF &&
           c != '\n')
    {
        s[i++] = c;
    }

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';
    return i;
}

void reserve(char *original, char *copy)
{
    int len = strlen(original);
    for(int i=0; i < len; i++)
    {
        copy[i] = original[len-1-i]; 
    }
}
