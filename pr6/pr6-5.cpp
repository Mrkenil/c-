#include<iostream>
using namespace std;

class add{
	int num;
	public:
		void Sd(){
			cout << "Enter any number : ";
			cin  >> num;
		}
		void Gd(){
			cout << "Num : " << num << endl;
		}
		add operator+(add c){
			add a;
			a.num = num + c.num;
			return a;
		}
};

int main(){
	add a,b,c;
	
	a.Sd();
	b.Sd();
	
	c = a + b; 
	
	a.Gd();
	b.Gd();
	c.Gd();
}
