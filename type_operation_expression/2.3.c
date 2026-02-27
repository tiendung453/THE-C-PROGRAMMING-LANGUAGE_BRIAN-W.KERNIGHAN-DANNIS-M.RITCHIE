#include <stdio.h>
#include <string.h>
#include <ctype.h>

int htoi(char s[]);

int main()
{
    printf("%d\n", htoi("FF"));
    printf("%d\n", htoi("0x1A"));
    return 0;
}

int htoi(char s[])
{
    int i = 0;
    int result = 0;
    int temp;

    /* bỏ 0x hoặc 0X */
    if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for(; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]))
            temp = s[i] - '0';
        else if(s[i] >= 'A' && s[i] <= 'F')
            temp = s[i] - 'A' + 10;
        else if(s[i] >= 'a' && s[i] <= 'f')
            temp = s[i] - 'a' + 10;
        else
            break;

        result = result * 16 + temp;
    }

    return result;
}