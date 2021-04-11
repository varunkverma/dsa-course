#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// in Stack
void func1()
{
    Rectangle r = {10, 5};

    Rectangle *p = &r;

    printf("\nLength %d, breadth: %d\n", p->length, p->breadth);
}

// in Heap
void func2()
{
    Rectangle *p = (Rectangle *)malloc(sizeof(Rectangle)); // new Rectangle;
    p->length = 10;
    p->breadth = 8;
    printf("\nLength %d, breadth: %d\n", p->length, p->breadth);
}

int main()
{
    func1();
    func2();

    return 0;
}