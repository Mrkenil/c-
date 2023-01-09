#include <iostream>
using namespace std;


class Base {
 public:
  virtual void print() { cout << "I am a Base class object" << endl; }
};


class Derived: public Base {
 public:
  void print() { cout << "I am a Derived class object" << endl; }
};

class ReverseDerived: public Base {
 public:
  void print() { cout << "I am a ReverseDerived class object" << endl; }
};

int main() {
  Base *b = new Base;
  Base *d = new Derived;
  Base *rd = new ReverseDerived;

  b->print();

  d->print();

  rd->print();

  return 0;
}

