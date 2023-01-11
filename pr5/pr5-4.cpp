#include<iostream>
using namespace std;

class E1{
	protected:
		int id = 1;
		string name = "om";
		long long int selary = 50000;			
};
class E2{
	protected:
		int id = 2;
		string name = "kris";
		long long int selary = 55000;			
};
class Data : public E1,public E2{
	public:
		Data(){
			cout << "id\tname\tselary" << endl;
			cout << "------- ------- -------" << endl;
			
			cout << E1::id << "\t" << E1::name << "\t" << E1::selary << endl;
			cout << E2::id << "\t" << E2::name << "\t" << E2::selary << endl;
		}
};

int main(){
	Data a;
}
