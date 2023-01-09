#include <iostream>
#include <string>
using namespace std;
class Message
{
private:
    string message;

public:
    Message(string message = "")
        : message(message)
    {
    }

    void print()
    {
        cout << message << endl;
    }

    void print(string str)
    {
        cout << message << " " << str << endl;
    }
};

int main()
{
    Message m1("Hello");
    m1.print(); 
    m1.print("world");
    return 0;
}

