#include <iostream>

using namespace std;

int main()
{

    // int a[5];
    // a[0] = 12;
    // a[0] = 14;
    // a[0] = 16;
    // cout << sizeof(a) << endl;

    int a[5] = {2, 3, 4};
    cout << sizeof(a) << endl;
    cout << a[0] << endl;

    for (int x : a)
    {
        cout << x << endl;
    }

    return 0;
}