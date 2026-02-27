#include<stdio.h>
#include<stdbool.h>

#define MAX_LINE 20

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main()
{
    int c, len;
    char line[MAX_LINE];
    char longest[MAX_LINE];
    int max = 0;
    printf("Nhap input\n");
    while ((len = getLine(line, MAX_LINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
    {
        printf("Dong dai nhat la: %s\t%d\n", longest, max);
    }
    
    return 0;
}

int getLine(char s[], int lim)
{
    int c;
    int i = 0;
    int len = 0;
    while (((c = getchar()) != EOF) && (c != '\n'))
    {
        if(i < lim -1)
        {
            s[i++] = c;
        }
        ++len;  
    }
    
    if(c == '\n')
    {
        s[i] = c;
        ++len;
        ++i;
    }
    s[i] = '\0';
    return len;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    
}