#include<iostream>
using namespace std;

class Admin{
	string com_name;
	int total_staf;
	int manager_salary;
	int emp_salary;
	long long int total_anu_revenue;
	string can_terminate;
	protected:
		Admin(){
			com_name = "TATA";
			total_staf = 2000;
			manager_salary = 50000;
			emp_salary = 30000;
			can_terminate = "Yes";
			total_anu_revenue = 350000000;
		}
		void Semp_s(){
				cout << "Enter Emp salary : ";
				cin  >> emp_salary;
				
			}
			void c_name(){
				cout << "company name : " << com_name << endl;
			}
			int M_salary(){
				return manager_salary;
			}
			int T_staf(){
				return total_staf;
			}
			void can_t(){
				cout << "Admin can turminat....";
			}
			int e_s(){
				return emp_salary;
			}
		public:	
		void myaccess(){
			cout << endl << "Admin access:" << endl;
			cout << "Company name: " << com_name << endl;
		    cout << "Manager salary: " << manager_salary << endl;
		    cout << "Employee salary: " << emp_salary << endl;
 			cout << "Total staff: " << total_staf << endl;
		    cout << "Total annual revenue: " << total_anu_revenue << endl;
		    cout << "Can terminate: " << can_terminate << endl;
		}
};
class manager :public Admin{
	protected:
		void comp_name(){
				c_name();
			}
			void emp_s(){
				Semp_s();
			}
			int Shemp_s(){
				long long int s;
				s = e_s();
				return s;
			}
			void manager_salary(){
				long long int a;
				cout << "Enter extra amaunt you wont : ";
				cin  >> a;
				cout << "manager salary : " << M_salary() + a;
			}
			void can_turm(){
				cout << "manager can turminat only employ...";
			}
		public:	
		void myaccess(){
			cout << endl << "Manager access:" << endl;
		    c_name();
    		cout << "His salary..." << endl;
		    cout << "Employee salary: " << e_s() << endl;
		    cout << "Total staff: " << T_staf() << endl;
		}
};
class employ :public manager{
	public:
		void co_name(){
			comp_name();
		}
		void emp_salary(){
			long long int a;
			cout << "Enter extra amaunt you wont : ";
			cin  >> a;
			cout << "employee salary : " << Shemp_s() + a;
		}
		void myaccess(){
			cout << endl <<"Employee access:" << endl;
    		comp_name();
    		cout << "His salary..." << endl;
		}
};

int main(){
	employ a;
	a.Admin::myaccess();
	a.manager::myaccess();
	a.myaccess();
}
