#include<iostream>

using namespace std;

inline void mult(int);

int main(){
	
	int n;
	
	cout << "Enter any number : ";
	cin >> n;
	
	mult(n);
	
}

inline void mult(int a){
	int i=1;
	
	k :
		cout << a << " * " << i << " = " << a*i << endl;
		i++;
		if(i<=10)
		{
			goto k;
		}
}
