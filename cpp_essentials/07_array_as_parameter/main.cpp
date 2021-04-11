#include <iostream>

using namespace std;

void fun1(int a[], int size)
{
    // printf("array size: %d\n", size);
    // when you pass array to a function, you can't access its elements using array as it receives pointer to the array and not the actual array itself.
    // for (int x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void fun2(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] *= 2;
    }
}

int *createArray(int size)
{
    int *p;
    p = new int[size];
    // p = (int *)malloc(sizeof(int) * size);
    return p;
}

int main()
{

    int a[5] = {2, 4, 6, 8, 10};
    int size = sizeof(a) / sizeof(int);
    fun2(a, size);
    fun1(a, size);

    int *b = createArray(size);
    fun1(b, size);

    return 0;
}