#include<iostream>
using namespace std;

class Print{
	private :
		string name;
	public :
		void SetData() {
			cout << "Enter name : ";
			cin  >> name;
			cout << endl << "----------------------------" << endl;			
		}	
		void GetData() {
			cout << "name : " << name;
		}
};

int main() {
	Print a;
	
	a.SetData();
	a.GetData();
}
