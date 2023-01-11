#include<iostream>
using namespace std;

class Mother{
	public :
		void display(){
			cout << "I am mother" << endl;
		}
};
class Daugther : public Mother{
	public :
		void display(){
			cout << "I am daugther" << endl;
		}
};

int main(){
	Daugther a;
	
	a.Mother::display();
	a.display();
}
