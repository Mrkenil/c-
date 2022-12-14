#include<iostream>
using namespace std;

class Avr{
	private :	
	    int b,i;
		double num[100],sum,avrg;
	public : 
		void Getn(){
			cout << "Enter the number of data : ";
			cin  >> b;
			sum = 0.0;
		}	
		void Gatnum(){
			for(i=0;i<b;i++)
			{
				cout << i+1 << ". Enter number : ";
				cin  >> num[i];
				sum += num[i];
			}
		}
		void Outavrge(){
			cout << endl << "average : " << sum / b << endl;
		}
};

int main() {
	
	Avr a;
	
	a.Getn();
	a.Gatnum();
	a.Outavrge();
	
	return 0;
}
