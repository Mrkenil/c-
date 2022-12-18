#include<iostream>
using namespace std;

class Time{
	private :
		int t1_s,t1_m=0,t1_h=0;
	public :
		void SetTime(){
			cout << "Enter second : ";
			cin  >> t1_s;
			cout << endl << "----------------------------" << endl;
		}
		void GetTime(){
			
			if(t1_s>=3600)
			{
				a :
				t1_h++;
				t1_s-=3600;
				if(t1_s>=3600)
				{
					goto a;
				}
			}
			if(t1_s>=60)
			{
				b :
				t1_m++;
				t1_s-=60;
				if(t1_s>=60)
				{
					goto b;
				}
			}
			
			cout << endl << "----------------------------" << endl;
			
			cout << "Your nate time is :  " << t1_h << " : " << t1_m << " : " << t1_s; 
		}
};

int main() {
	Time a;
	
	a.SetTime();
	a.GetTime();
}
