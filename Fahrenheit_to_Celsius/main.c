#include<stdio.h>
int main(void)
{
    /* using while
    float celsius, fahrenheit;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahrenheit = 0;
    while(fahrenheit <= upper)
    {
        celsius = (5.0/9.0)*(fahrenheit - 32);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }*/


    // using for 
    /*
    for(int fah = 0; fah <= 300; fah = fah+20)
    {
        printf("%3d\t%6.1f\n", fah, (5.0/9.0)*(fah - 32));
    }*/

    //modify the temperature conversion program to print the table in reverse order from 300 degrees to 0
    for(int fah = 300; fah >= 0; fah =  fah - 20)
    {
        printf("%3d\t%5.1f\n", fah, (5.0/9.0)*(fah - 32));
    }

    return 0;
}