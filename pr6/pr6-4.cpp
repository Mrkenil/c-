#include <iostream>

using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    int getCount() const {
        return count;
    }

    Counter operator++ () {
        ++count;
        return *this;
    }

    Counter operator-- () {
        --count;
        return *this;
    }
};

int main() {
    Counter c1(100), c2;

    cout << "c1 = " << c1.getCount() << endl;
    cout << "++c1 = " << (++c1).getCount() << endl;
    cout << "c1 = " << c1.getCount() << endl;

    cout << "c2 = " << c2.getCount() << endl;
    cout << "--c2 = " << (--c2).getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;

    return 0;
}

