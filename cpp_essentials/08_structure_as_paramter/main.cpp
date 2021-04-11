#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun1(Rectangle r)
{
    r.length = 20;
    printf("\nLength:%d, breadth:%d\n", r.length, r.breadth);
}
void changeLength(Rectangle *r, int newLength)
{
    r->length = newLength;
}

Rectangle *CreateRectangle(int length, int breadth)
{
    Rectangle *rect = (Rectangle *)malloc(sizeof(Rectangle));
    // Rectangle *rect = new Rectangle;
    rect->length = length;
    rect->breadth = breadth;
    return rect;
}

void PrintRectangle(Rectangle *r)
{
    printf("\nLength:%d, breadth:%d\n", r->length, r->breadth);
}

int main()
{
    Rectangle *r = CreateRectangle(10, 5);
    PrintRectangle(r);
    // printf("\nLength:%d, breadth:%d\n", r.length, r.breadth);
    // changeLength(&r, 33);
    // printf("\nLength:%d, breadth:%d\n", r.length, r.breadth);
    return 0;
}