#include <iostream>

using namespace std;

class MyClass
{
public:
    void func()
    {
        cout << "Function with 0 arguments called." << endl;
    }

    void func(int a)
    {
        cout << "Function with 1 argument called: " << a << endl;
    }

    void func(int a, int b)
    {
        cout << "Function with 2 arguments called: " << a << ", " << b << endl;
    }

    void func(int a, int b, int c)
    {
        cout << "Function with 3 arguments called: " << a << ", " << b << ", " << c << endl;
    }
};

int main()
{
    MyClass obj;
    obj.func();
    obj.func(1);
    obj.func(1, 2);
    obj.func(1, 2, 3);
    return 0;
}

