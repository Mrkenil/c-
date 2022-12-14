#include<iostream>
using namespace std;

class Car{
	private :
		int id,yare;
		string color,modal,c_name;
	public : 
		void SetData() {
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter company name : ";
			cin  >> c_name;
			cout << "Enter car color : ";
			cin  >> color;
			cout << "Enter modal : ";
			cin  >> modal;
			cout << "Enter release year : ";
			cin  >> yare;
		}	
		void line() {
			cout << endl << "------------------------------------" << endl;
		}
		void table() {
			cout << endl << "   id\tcompany name\tcar color  modal\trelease year" << endl;
			cout << endl << "------- --------------- ------- ------- -------------" << endl;
		}
		void GetData() {
			cout << endl << id << "\t" << c_name << "\t" << color << "\t" << modal << "\t" << yare << endl;
		}
};

int main(){
	Car c1, c2, c3, c4;
	
	c1.SetData();
	c1.line();
	c2.SetData();
	c1.line();
	c3.SetData();
	c1.line();
	c4.SetData();
	c1.line();
	
	c1.table();
	c1.GetData();
	c2.GetData();
	c3.GetData();
	c4.GetData();
}
