#include<iostream>
using namespace std;

class stud{
	private :
		int id,age;
		string name,corse,collage,email,city;
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
			cout << "Enter course : ";
			cin  >> corse;
			cout << "Enter email : ";
			cin  >> email;
			cout << "Enter collage : ";
			cin  >> collage;   
			cout << "Enter city : ";
			cin  >> city;
		}
		
		static tabal(){
			system("cls");
			cout << "id\tname\tage\tcourse\tcollage\t\tcity\temail" << endl;
			cout << "--\t----\t---\t------\t-------\t\t----\t-----" << endl;
		}
		
		void GetData(){
			cout << id << "\t" << name << "\t" << age << "\t" << corse << "\t" << collage << "\t\t" << city << "\t" << email << endl;
		}
};

int main() {
	
	int n;
	
	cout << "Enter number of student : ";
	cin  >> n;
	
	stud a[n];
	
	for(int i=0;i<n;i++)
		a[i].SetData(i+1,n);
		
	stud::tabal();	
		
	for(int i=0;i<n;i++)
		a[i].GetData();
		
}
