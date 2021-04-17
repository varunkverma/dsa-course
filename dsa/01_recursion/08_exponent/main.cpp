#include <iostream>

using namespace std;

int exponent1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return m * exponent1(m, n - 1);
}

int exponent2(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return exponent2(m * m, (n / 2));
    }
    return m * exponent2(m * m, (n - 1) / 2);
}

int main()
{

    int m = 2, n = 10;
    printf("pow(%d,%d): %d\n", m, n, exponent1(m, n));
    printf("pow(%d,%d): %d\n", m, n, exponent2(m, n));

    return 0;
}