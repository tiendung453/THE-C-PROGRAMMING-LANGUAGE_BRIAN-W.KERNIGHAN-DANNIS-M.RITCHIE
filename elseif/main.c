#include<stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int v[] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d", binsearch(4,v,sizeof(v)));
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        mid = (high + low)/2;
        if(x <= v[mid]) high = mid;
        else low = mid + 1;
    }
    return (x == v[low])? low : -1;
}