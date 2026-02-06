#include<stdio.h>
int main(void)
{
    long counting = 0;
    /*using while
    while (getchar() != EOF)
    {
        ++counting;
        printf("%ld\n", counting);
    }
    */

    //using for
    for(counting = 0; getchar() != EOF; ++counting)
    {
        printf("%ld\n", counting);
    }
    
    return 0;
}