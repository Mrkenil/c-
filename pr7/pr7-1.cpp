#include <iostream>
using namespace std;

class A {

    int a;

public:
    void setA() {
        cout << "Enter A : ";
        cin >> a;
    }

    virtual void getData() {
        cout << endl << "A\t: " << a << endl;
    }
};
class B : public A {
int b;
public:
    void setDataB() {
        cout << "Enter B : ";
        cin >> b;
    }
    virtual void getData() {
        cout << endl << "B : " << b << endl ;
    }
};

int main() {

   A *a1;
   B b1;

   a1 = &b1;

   a1->setA();
   
   b1.setDataB();
   a1->getData();

   
}

