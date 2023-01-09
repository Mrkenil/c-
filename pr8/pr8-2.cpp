#include<iostream>
using namespace std;

class Logic{
	int a;
	int b;
	public:
		void setData()
		{
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			
		}
		void Div()
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout << "Division of " << a << " / " << b << " : " << a/b << endl;
			}
		}
		void Exception()
		{
			try{
				Div();
			}
			catch(int b){
				
				cout << "---"<< endl;
				cout << "system Can divided by Zero but it's not give any value or answer.." << endl;
			
			}
			catch(...){
				cout << "---"<< endl;
				cout << "system Can not divided Symbols & Characters.." << endl;
			}	
		}
};
int main()
{
	Logic l;
	l.setData();
	l.Exception();
}
