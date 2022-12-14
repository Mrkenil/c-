#include<iostream>
using namespace std;

class Employees{
	private :
		int id,age,salary;
		string name,com_name,role,city,exp;
	public :
		void SetData(){
			cout << "Enter id\t: ";
			cin  >> id;
			cout << "Enter name\t: ";
			cin  >> name;
			cout << "Enter age\t: ";
			cin  >> age;
			cout << "Enter role\t: ";
			cin  >> role;
			cout << "Enter salary\t: ";
			cin  >> salary;
			cout << "Enter experience : ";
			cin  >> exp;
			cout << "Enter city\t: ";
			cin  >> city;
			cout << "Enter company name : ";
			cin  >> com_name;
		}
		void GetData(){
			cout << "id\t\t: " << id << endl 
				 << "name\t\t: " << name << endl 
				 << "age\t\t: " << age << endl 
				 << "role\t\t: " << role << endl
				 << "salary\t\t: " << salary << endl
				 << "experience\t: " << exp << endl
				 << "city\t\t: " << city << endl
				 << "company_name\t: " << com_name << endl;
		}
		void line(){
			cout << endl << "---------------------------------------" << endl;
		}
		
};

int main() {
	
	Employees e1,e2,e3,e4,e5;
	
	e1.SetData();
	e1.line();
	e2.SetData();
	e1.line();
	e3.SetData();
	e1.line();
	e4.SetData();
	e1.line();
	e5.SetData();
	
	e1.line();
	
	e1.GetData();
	e1.line();
	e2.GetData();
	e1.line();
	e3.GetData();
	e1.line();
	e4.GetData();
	e1.line();
	e5.GetData();
}
