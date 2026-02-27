#include <stdio.h>

#define MAX_LINE 1000
#define MAX_LINES 100

int getLine(char s[], int lim);

int main()
{
    char line[MAX_LINE];
    char result[MAX_LINES][MAX_LINE];

    int len;
    int count = 0;

    /* nhập nhiều dòng */
    while ((len = getLine(line, MAX_LINE)) > 0)
    {
        int i = len - 1;

        /* bỏ newline */
        if (line[i] == '\n')
            line[i--] = '\0';

        /* xóa space + tab cuối */
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
        {
            line[i--] = '\0';
        }

        /* nếu không rỗng thì lưu */
        if (i >= 0 && count < MAX_LINES)
        {
            int j = 0;
            while ((result[count][j] = line[j]) != '\0')
                j++;
            count++;
        }
    }

    /* EOF -> in 1 lần */
    printf("\n===== OUTPUT =====\n");

    for (int i = 0; i < count; i++)
        printf("%s\n", result[i]);

    return 0;
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