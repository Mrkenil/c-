#include<iostream>
using namespace std;

class Time{
	private :
		int t1_s,t1_m,t1_h,t2_s,t2_m,t2_h,t3_s,t3_m,t3_h;
	public :
		void SetTime(){
			cout << "Enter second of time one : ";
			cin  >> t1_s;
			cout << "Enter minute of time one : ";
			cin  >> t1_m;
			cout << "Enter houre of time one : ";
			cin  >> t1_h;
			cout << endl << "----------------------------" << endl;
			
			cout << "Enter second of time two : ";
			cin  >> t2_s;
			cout << "Enter minute of time two : ";
			cin  >> t2_m;
			cout << "Enter houre of time two : ";
			cin  >> t2_h;
			cout << endl << "----------------------------" << endl;
		}
		void GetTime(){
			t3_s = t1_s + t2_s;
			t3_m = t1_m + t2_m;
			t3_h = t1_h + t2_h;
			
			if(t3_s>=60)
			{
				a :
				t3_m++;
				t3_s-=60;
				if(t3_s>=60)
				{
					goto a;
				}
			}
			if(t3_m>=60)
			{
				b :
				t3_h++;
				t3_m-=60;
				if(t3_m>=60)
				{
					goto b;
				}
			}
			
			cout << endl << "----------------------------" << endl;
			
			cout << "Your nate time is :  " << t3_h << " : " << t3_m << " : " << t3_s; 
		}
};

int main() {
	Time a;
	
	a.SetTime();
	a.GetTime();
}
