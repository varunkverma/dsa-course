#include <iostream>

using namespace std;

int fib_loop(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int fib_rec(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib_rec(n - 2) + fib_rec(n - 1);
}
int fibHash[10];
int fib_memoized(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (fibHash[n] != -1)
    {
        return fibHash[n];
    }
    fibHash[n] = fib_memoized(n - 2) + fib_memoized(n - 1);
    return fibHash[n];
}

int main()
{
    int n = 5;
    for (int i = 0; i < 10; i++)
    {
        fibHash[i] = -1;
    }
    cout << fib_loop(5) << endl
         << fib_rec(5) << endl
         << fib_memoized(5) << endl;
    return 0;
}