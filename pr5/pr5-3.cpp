#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    Animal(string name, int age) : name(name), age(age) {}
    
    void set_value(string name, int age) {
        this->name = name;
        this->age = age;
    }
    
    string get_name() const { return name; }
    int get_age() const { return age; }
    
    virtual string get_extra_info() const { return ""; }
    
private:
    string name;
    int age;
};

class Zebra : public Animal {
public:
    Zebra(string name, int age, string origin) : Animal(name, age), origin(origin) {}
    
    string get_extra_info() const override {
        return "This zebra is from " + origin + ".";
    }
    
private:
    string origin;
};

class Dolphin : public Animal {
public:
    Dolphin(string name, int age, string habitat) : Animal(name, age), habitat(habitat) {}
    
    string get_extra_info() const override {
        return "This dolphin lives in " + habitat + ".";
    }
    
private:
    string habitat;
};

int main() {
    Zebra zebra("Ziggy", 5, "Africa");
    cout << zebra.get_name() << " is " << zebra.get_age() << " years old. " << zebra.get_extra_info() << endl;
    
    Dolphin dolphin("Flipper", 10, "the ocean");
    cout << dolphin.get_name() << " is " << dolphin.get_age() << " years old. " << dolphin.get_extra_info() << endl;
    
    return 0;
}

