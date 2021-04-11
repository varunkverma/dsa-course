#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        this->length = 0;
        this->breadth = 0;
    }
    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
    ~Rectangle()
    {
        cout << "Destructor for Rectangle class called" << endl;
    }
    int area();
    int parameter();
};

int Rectangle::area()
{
    return this->breadth * this->length;
}
int Rectangle::parameter()
{
    return 2 * (this->breadth + this->length);
}

int main()
{
    Rectangle r = Rectangle(5, 2);
    printf("\narea of rectangle: %d\n", r.area());
    printf("\nparameter of rectangle: %d\n", r.parameter());
    return 0;
}