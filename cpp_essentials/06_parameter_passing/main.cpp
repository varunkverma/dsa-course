#include <iostream>

using namespace std;

void fun1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void fun2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void fun3(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int x = 10, y = 5;
    printf("\nBefore fun1(), x: %d, y: %d\n", x, y);
    fun1(x, y);
    printf("\nAfter fun1(), x: %d, y: %d\n", x, y);

    x = 10;
    y = 5;

    printf("\nBefore fun2(), x: %d, y: %d\n", x, y);
    fun2(&x, &y);
    printf("\nAfter fun2(), x: %d, y: %d\n", x, y);

    x = 10;
    y = 5;

    printf("\nBefore fun3(), x: %d, y: %d\n", x, y);
    fun3(x, y);
    printf("\nAfter fun3(), x: %d, y: %d\n", x, y);

    return 0;
}
