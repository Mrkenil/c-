#include<iostream>
using namespace std;

class stud{
	private :
		int id;
		string name;
		double per;
	public :	
		void Sdata(){
			cout << "Enter id: ";
			cin  >> id;
			cout << "Enter name: ";
			cin  >> name;
			cout << "Enter pre: ";
			cin  >> per;
		}
		void Gdata(){
			cout << "id\t:" << id << endl
				 << "name\t:" << name << endl
				 << "per\t:" << per << endl;	
		}
};
class call{
	private:
		stud a;
	public :
		call(){
			a.Sdata();
			a.Gdata();
		}
};
int main(){
	call a;
}
