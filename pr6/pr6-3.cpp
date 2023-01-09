#include<iostream>
using namespace std;

class pernt{
	protected:
	int a,b;
	public:
		 void Sd(){
		 	cout << "Enter a : ";
		 	cin  >> a;
		 	cout << "Enter b : ";
		 	cin  >> b; 
		 }
		 void Gd(){
		 	cout << "sum : " << a + b;
		 }
};
class child : public pernt{
	public:
		void Gd(){
			cout << "Here " << a << " + " << b << " = " << a + b << endl;
		}
};

int main(){
	child a;
	
	a.Sd();
	a.Gd();
	a.pernt::Gd();
}
