#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    Rectangle r1 = {10, 5};
    cout << "Size of rectangle r1: " << sizeof(r1) << endl;
    return 0;
}