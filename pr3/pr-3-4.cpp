#include<iostream>
using namespace std;

class Fleat{
	private :
	 	int f_n,f_sqf;
		string f_name,f_f;
	public : 
		void SetData() {
			cout << "Enter fleat name : ";
			cin  >> f_name;
			cout << "Enter fleat number : ";
			cin  >> f_n;
			cout << "Enter fleat square feet : ";
			cin  >> f_sqf;
			cout << "Enter your flore : ";
			cin  >> f_f;
			
			cout << endl << "----------------------------" << endl;
		}	
		void GatData() {
			cout << "fleat name : " << f_name << endl
				 << "fleat number : " << f_n << endl
				 << "fleat flore : " << f_f << endl
				 << "fleat square feet : " << f_sqf << endl;
		}
		
};

int main() {
	Fleat a;
	
	a.SetData();
	a.GatData();
}
