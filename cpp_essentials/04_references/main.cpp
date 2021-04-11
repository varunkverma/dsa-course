#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    cout << a << " " << r << endl;

    r = 18;

    cout << a << " " << r << endl;

    int b = 11;
    r = b;

    cout << a << " " << r << endl;

    return 0;
}