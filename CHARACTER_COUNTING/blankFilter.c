#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int current_char;
    int last_char;
    bool checkHeadline = true;
    bool flag = true;
    while ((current_char = getchar()) != EOF)
    {
        if(checkHeadline && current_char == ' ') continue;
        if(current_char != ' ') checkHeadline = false;
        if((last_char == ' ') && (current_char == ' ')) continue;

        if(flag) 
        {
            printf("\n");
            flag = false;
        }
        printf("%c",current_char);
        last_char = current_char;
    }
    return 0;
}

