#include<stdio.h>
#include<stdbool.h>

// 65 - 90___97 - 122
#define isLetter(c) \
    (((c >= 'A')&&((c <= 'Z') || (c >='a'))&&(c <= 'z')))

int main(void)
{
    int c;
    bool newWord = true;
    while ((c = getchar()) != EOF)
    {
        if(isLetter(c))
        {
            if(newWord)
                putchar('\n');
            putchar(c);
            newWord = false;
        }
        else
            newWord = true;
    }

    return 0;
}