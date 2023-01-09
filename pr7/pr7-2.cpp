#include<iostream>

using namespace std;

class A{
	protected:
	int a;
	public:
		virtual void setA(){
			cout << "Enter a : ";
			cin  >> a;
		}
};
class B :virtual public A{
	protected:
	int b;
	public:
		B(){
			cout << "Enter b : ";
			cin  >> b;
		}
};
class C :virtual public A{
	protected:
	int c;
	public:
		C(){
			cout << "Enter c : ";
			cin  >> c;
		}
};
class D : public B ,public C{
	protected:
	int d;
	public:
		D(){
			cout << "Enter d : ";
			cin  >> d;
		}
		void sum(){
			cout << a << " + " << b << " + " << c << " + " << d << " = " << a+b+c+d;
		}
};

int main(){
	D a;
	
	a.setA();
	a.sum();
}
