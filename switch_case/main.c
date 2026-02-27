#include <stdio.h>

void escape(char *s, char *t);
int getLine(char s[], int lim);

int main()
{
    char t[100];
    char s[100];
    int len;

    while ((len = getLine(t,100)) != 0)
    {
        escape(s, t);
        printf("%s\n", s);
    }

    return 0;
}

void escape(char *s, char *t)
{
    int i = 0, j = 0;

    while (t[i] != '\0')
    {
        switch (t[i])
        {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;

            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;

            default:
                s[j++] = t[i];
                break;
        }
        i++;
    }

    s[j] = '\0';
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