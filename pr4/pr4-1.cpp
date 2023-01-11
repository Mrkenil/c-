#include<iostream>
using namespace std;

/*

 id, name, role, salary, experience, address, email and contact

*/

class Employee{
	private :
		int id,salary,exp;
		long long int contact;
		string name, role, email, address;
	public :
		void Sdata(){
			
			cout << "Enter id: ";
			cin  >> id;
			cout << "Enter name: ";
			cin  >> name;
			cout << "Enter role: ";
			cin  >> role;
			cout << "Enter salary: ";
			cin  >> salary;
			cout << "Enter contact no. : ";
			cin  >> contact;
			cout << "Enter exp: ";
			cin  >> exp;
			cout << "Enter e-mail : ";
			cin  >> email;
			cout << "Enter address : ";
			cin  >> address;
			system("cls");
		} 
		static void heder(){
			cout << "id\tname\trole\tsalary\tcontact\t\texp\temail\t\taddress\n======= ======= ======= ======= ======= \t======= =============== =======\n"; 
		}
		void Gdata(){
			cout << id << "\t" << name << "\t" << role << "\t" << salary << "\t" << contact << "\t" << exp << "\t" << email << "\t" << address << "\t";  
		}
}; 

int main() {
	Employee a[5];
	
	int i;
	
	for(i=0;i<5;i++){
		a[i].Sdata();
	}
	Employee::heder();
	for(i=0;i<5;i++){
		a[i].Gdata();
	} 
}
