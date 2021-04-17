#include <iostream>

using namespace std;

int sum_of_first_n_recur(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum_of_first_n_recur(n - 1) + n;
}
int sum_of_first_n_loop(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n;
        n--;
    }
    return s;
}
int sum_of_first_n_formula(int n)
{
    return (n * (n + 1) / 2);
}

int main()
{
    cout << sum_of_first_n_recur(5) << endl;
    cout << sum_of_first_n_loop(5) << endl;
    cout << sum_of_first_n_formula(5) << endl;
    return 0;
}