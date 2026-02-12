#include<stdio.h>
#include<stdbool.h>

// 65 - 90___97 - 122
#define isLetter(c) \
    (((c >= 'A')&&((c <= 'Z') || (c >='a'))&&(c <= 'z')))

int main(void)
{
    int c;
    int count = 0;
    bool newWord = true;
    bool endWord = false;
    while ((c = getchar()) != EOF)
    {
        if(isLetter(c))
        {
            if(newWord)
                putchar('\n');
            putchar(c);
            ++count;
            newWord = false;
            endWord = true;
        }
        else
        {
            if(endWord)
            {
                for(int i = 0; i < count; ++i)
                {
                    printf("*");
                }
                count = 0;
                endWord = false;
            }
            newWord = true;
        }
    }

    return 0;
}