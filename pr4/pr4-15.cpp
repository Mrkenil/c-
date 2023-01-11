#include<iostream>
using namespace std;

class A;

class B {
	
	private :
		int a;
		
	public :
		
		void inputdata() {
			
			cout << endl << "INPUT A " << endl
				 << "---------" <<endl;
			cout << "Enter A : ";
			cin  >> a;
		}
		
		friend void SUM(B , A);
};


class A {
	
	private :
		int b;
		
	public :
		
		void inputdata() {
			
			cout << endl << "INPUT B" << endl
				  << "---------" <<endl;
			cout << "Enter B : ";
			cin  >> b;
		}
		
		friend void SUM(B , A);
};

void SUM(B a, A b) {
	
	cout << endl << "ADDISION OF A & B " << endl;
	cout << "\t A + B : " << a.a + b.b << endl;
}

int main() {
	
	B a;
	A b;
	
	
	a.inputdata();
	b.inputdata();
	
	SUM(a,b);
}

