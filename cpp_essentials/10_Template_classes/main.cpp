#include <iostream>

using namespace std;

template <class T>
class Arithematice
{
private:
    T a;
    T b;

public:
    Arithematice(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add();
    T sub();
};

template <class T>
T Arithematice<T>::add()
{
    return this->a + this->b;
}

template <class T>
T Arithematice<T>::sub()
{
    return this->a - this->b;
}

int main()
{
    Arithematice<int> a{10, 2};

    cout << "Add: " << a.add() << endl
         << "Sub: " << a.sub() << endl;

    Arithematice<float> b{10.48, 2};

    cout << "Add: " << b.add() << endl
         << "Sub: " << b.sub() << endl;

    return 0;
}