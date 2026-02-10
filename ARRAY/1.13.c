// draw histogram of the length of each word
#include<stdio.h>
#include<stdbool.h>

#define isLetter(c) \
    (((c >= 'A')&&((c <= 'Z') || (c >='a'))&&(c <= 'z')))

int main()
{
    int c;
    bool newWord = true;
    while ((c = getchar() != EOF))
    {
        if(isLetter(c))
        {
            
        }
    }
    
    return 0;
}