#include<iostream>
using namespace std;

class Diste{
	private :
		int d1_feet, d2_feet,d3_feet;
		int d1_inch,d2_inch,d3_inch;
	public :
		void SetData(){
			cout << "Enter feet of distence 1 : ";
			cin  >> d1_feet;
			cout << "Enter inch of distence 1 : ";
			cin  >> d1_inch;
			cout << endl << "-----------------------" << endl;
			cout << "Enter feet of distence 2 : ";
			cin  >> d2_feet;
			cout << "Enter inch of distence 2 : ";
			cin  >> d2_inch;
		}
		void PDist(){
			d3_inch = d1_inch + d2_inch;
			d3_feet = d1_feet + d2_feet;
			
			if(d3_inch >= 12)
			{
				a :
				d3_feet++;
				d3_inch -= 12;
				if(d3_inch >= 12)
				{
					goto a;
				}
			}
			cout << endl << "feet : " << d3_feet << " and " << "inch : " << d3_inch << endl;
		}
};

int main(){
	Diste a;
	
	a.SetData();
	
	a.PDist();
}
