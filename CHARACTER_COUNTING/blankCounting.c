#include<stdio.h>
int main(void)
{
    int countBlank = 0;
    int countTab = 0;
    int countEnter = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            ++countBlank;
        }
        if(c == '\t')
        {
            ++countTab;
        }
        if(c == '\n')
        {
            ++countEnter;
        }
    }

    printf("blank: %d\t", countBlank);
    printf("tab: %d\t", countTab);
    printf("enter: %d\n", countEnter);

    return 0;
}