#include<stdio.h>

#define MAX_LINE 100

int getLine();
void copy(char to[], char from[]);

int main()
{
    int c;
    while ((c = getchar())!= EOF)
    {
        
    }
    
    return 0;
}

int getLine()
{

}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    
}