#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a[240] = {0};
    int c;

    while ((c = getchar()) != EOF)
    {
        ++a[c];
    }

    printf("\n");

    for(int i = 0; i < 230; ++i)
    {
        if(a[i] != 0)
        {
            if(i == 32) 
            {
                printf("\\b: %d  ", a[i]);
            }
            else if (i == 10)
            {
                printf("\\n: %d  ", a[i]);
            }
            else
            {
                printf("%c: %d  ", i, a[i]);
            }
        }
    }

    printf("\n");
    return 0;    
}