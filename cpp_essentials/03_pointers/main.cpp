#include <iostream>
#include <stdlib.h>

using namespace std;

// access data variable
void func1()
{
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
}

// access array
void func2()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

// access heap memory with malloc
void func3()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    // releasing the memory
    free(p);
}

// access heap memory with new
void func4()
{
    int *p;
    p = new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    // releasing the array memory
    delete[] p;
}

int main()
{
    func1();
    cout << endl;
    func2();
    cout << endl;
    func3();
    cout << endl;
    func4();
    cout << endl;

    return 0;
}