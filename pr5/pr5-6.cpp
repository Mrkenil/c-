#include<iostream>
using namespace std;

class A {
	
	protected :
		
		int id;
		string name;
		string role;
		int salary;
		string exprience;
		string comp_name;
		string address;
		string email;
		long long int contact;
		
	public :
		
		void InputA() {
			
			cout << "Enter your Id           : ";
			cin  >> id;
			cout << "Enter your Name         : ";
			cin  >> name;
			cout << "Enter your Role         : ";
			cin  >> role;
		}
};

class B : public A {
		
	public :
		
		void InputB() {
			
			cout << "Enter your Salary       : ";
			cin  >> salary;
			cout << "Enter your Exprience    : ";
			cin  >> exprience;
		}
};

class C : public B {
		
	public :
		
		void InputC() {
			
			cout << "Enter your Company Name : ";
			cin  >> comp_name;
			cout << "Enter your Address      : ";
			cin  >> address;
		}
		
		void OutC() {
			cout << "-----------------------------------"<<endl;
			cout << "\t NAME   : " << name << endl
				 << "\t ROLE   : " << role << endl
		    	 << "\t SALARY : " << salary << endl;
			cout << "-----------------------------------"<<endl;
		}
};

class D : public C {
	
	public :
		
		void InputD() {
			
			cout << "Enter your Email       : ";
			cin  >> email;
			cout << "Enter your Contact No. : ";
			cin  >> contact;
		}
		
		void OutD() {
			
			cout << "-----------------------------------"<<endl;
			cout << " ID           : " << id << endl
				 << " NAME         : " << name << endl
				 << " ROLE         : " << role << endl
				 << " SALARY       : " << salary << endl
				 << " EXPRIENCE    : " << exprience << endl
				 << " COMAPNY NAME : " << comp_name << endl
				 << " ADDRESS      : " << address << endl
				 << " EMAIL        : " << email << endl
				 << " CONTACT NO.  : " << contact << endl;
			cout << "------------------------------------"<<endl;					 
		}
};

int main() {
	
 	D d1;
 	
 	d1.InputA();
 	d1.InputB();
 	d1.InputC();
 	d1.OutC();
 	d1.InputD();
 	d1.OutD();
 	
}
