#include<stdio.h>
float exChangeTemperature(float tem);

int main(void)
{
    int temp = 0;
    while (temp <= 300)
    {
        printf("%3d\t%5.2f\n",temp, exChangeTemperature(temp));
        temp += 20;
    }
    
    return 0;
}

float exChangeTemperature(float tem)
{
    return ((5.0/9.0)*(tem - 32));
}