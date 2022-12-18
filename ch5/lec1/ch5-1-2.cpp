#include<iostream>
using namespace std;

class cust{
	private :
		int id,age;
		long long int number; 
		string name,s_v,t_b_m,city;
	public :
		void SetData(int i,int n){
			system("cls");
			cout << "Student : " << i << endl;
			
			cout << "Enter id : ";
			cin  >> id;
			cout << "Enter name : ";
			cin  >> name;
			cout << "Enter age : ";
			cin  >> age;
			cout << "Enter telecome brand name : ";
			cin  >> t_b_m;
			cout << "Enter mobile number : ";
			cin  >> number;
			cout << "Enter simcard validity : ";
			cin  >> s_v;   
			cout << "Enter city : ";
			cin  >> city;
		}
		static tabal(){
			system("cls");
			cout << "id\tname\tage\tbeand\tnumber\t\t\tcity\tsimcard validity" << endl;
			cout << "--\t----\t---\t-----\t------\t\t\t----\t------- --------" << endl;
		}
		void GetData(){
			cout << id << "\t" << name << "\t" << age << "\t" << t_b_m << "\t" << number << "\t\t" << city << "\t" << s_v << endl;
		}
};
int main() {
	
	int n;
	
	cout << "Enter number of student : ";
	cin  >> n;
	
	cust a[n];
	
	for(int i=0;i<n;i++)
		a[i].SetData(i+1,n);
		
	cust::tabal();	
		
	for(int i=0;i<n;i++)
		a[i].GetData();
		
}
