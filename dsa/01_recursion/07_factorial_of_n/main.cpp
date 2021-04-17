#include <iostream>

using namespace std;

int fact_recur(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return fact_recur(n - 1) * n;
}
int fact_loop(int n)
{
    int f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    return f;
}

int main()
{
    cout << fact_recur(5) << endl;
    cout << fact_loop(5) << endl;
    return 0;
}