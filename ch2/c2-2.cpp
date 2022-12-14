#include<iostream>

using namespace std;
inline float su(float,float);
inline float sb(float,float);
inline float ml(float,float);
inline float di(float,float);
inline float mo(int,int);

int main(){
	int n ;
	float a, b,k; 
	do
	{
		l :
		cout << "Enter 1 for +" << endl
			 << "Enter 2 for -" << endl
		     << "Enter 3 for *" << endl
		     << "Enter 4 for /" << endl
		     << "Enter 5 for %" << endl;
		cout << endl << "---------------------------" << endl;
		cout << "hello user if you enter any one of the menu the code is run " << endl
			 << "if you not enter any one of the menu the code is restart and give you menu return....." << endl;
			 
		cout << "Enter your choice : ";
		cin >> n;
		
		switch(n)
		{
			case 1 : 
				cout << "Enter a : ";
				cin >> a;
				cout << "Enter b : ";
				cin >> b;
				
				k = su(a,b);
				
				cout << a << " + " << b << " = " <<	k;			
			case 2 : 
				cout << "Enter a : ";
				cin >> a;
				cout << "Enter b : ";
				cin >> b;
				
				k = sb(a,b);
				
				cout << a << " - " << b << " = " <<	k;			
			case 3 : 
				cout << "Enter a : ";
				cin >> a;
				cout << "Enter b : ";
				cin >> b;
				
				k = ml(a,b);
				
				cout << a << " * " << b << " = " <<	k;			
			case 4 : 
				cout << "Enter a : ";
				cin >> a;
				cout << "Enter b : ";
				cin >> b;
				
				k = di(a,b);
				
				cout << a << " / " << b << " = " <<	k;			
			case 5 : 
				cout << "Enter a : ";
				cin >> a;
				cout << "Enter b : ";
				cin >> b;
				
				k = mo(a,b);
				
				cout << a << " % " << b << " = " <<	k;			
			default : 
				goto l;
				
		}
			 
	}while(n!=0);
}

inline float su(float a,float b){
	return a + b;
}
inline float sb(float a,float b){
	return a - b;
}
inline float ml(float a,float b){
	return a * b;
}
inline float di(float a,float b){
	return a / b;
}
inline float mo(int a,int b){
	return a % b;
}
