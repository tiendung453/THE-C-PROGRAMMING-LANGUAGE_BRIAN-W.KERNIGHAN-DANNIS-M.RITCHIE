#include<stdio.h>

unsigned setBits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

int main()
{
    unsigned x, y;
    int p, n;

    printf("Nhap x: ");
    scanf("%u", &x);

    // printf("Nhap y: ");
    // scanf("%u", &y);

    printf("Nhap p: ");
    scanf("%d", &p);

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("%u", invert(x, p, n));
    return 0;
}

unsigned setBits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = ~(~0 << n);     // 000...0111
    unsigned y_bits;

    y_bits = (y & mask) << (p + 1 - n);

    x &= ~(mask << (p + 1 - n));

    return x | y_bits;
}

unsigned invert(unsigned x, int p, int n)
{
    return (x & ~(~(~0 << n) << (p+1-n))) | (~x & (~(~0 << n) << (p+1-n)));
}

unsigned rightrot(unsigned x, int n)
{

}
