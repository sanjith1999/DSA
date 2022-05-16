#include <stdio.h>
double exponential(double x, int n);
double exponential1(double x, int n);

int main()
{
    printf("%2f \n", exponential1(3, 100));
    return 0;
}

// O(n^2)
double exponential(double x, int n)
{
    double r = 0;
    static double p = 1, f = 1;
    if (n == 0)
        return 1;
    r = exponential(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

// Horner's rule O(n)
double exponential1(double x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;
    s = 1 + x / n * s;
    return exponential1(x, n - 1);
}