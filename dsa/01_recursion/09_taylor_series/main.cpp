#include <iostream>

using namespace std;

double exp(float x, float n)
{
    static double p = 1, f = 1;

    if (n == 0)
    {
        return 1;
    }
    double r = exp(x, n - 1);
    p *= x;
    f *= n;
    return r + (p / f);
}

double taylor_homer(float x, float n)
{
    static double r = 1;
    if (n == 0)
    {
        return r;
    }
    r = 1 + ((x / n) * r);
    return taylor_homer(x, n - 1);
}

int main()
{
    int x = 1, n = 10;
    printf("exp(%d,%d): %f\n", x, n, exp(x, n));
    printf("exp(%d,%d): %f\n", x, n, taylor_homer(x, n));
    return 0;
}