#include<iostream>

using namespace std;
inline int fect(int);
int main(){ 
	
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n],b[n],i;
	
	for(i=0;i<n;i++)
	{
		cout << "Enter a_" << i << " : ";
		cin >> a[i];
	}
	cout << endl << "------------------------------" << endl;
	for(i=0;i<n;i++)
	{
		fect(a[i]);
	}
}

inline int fect(int a){
	int j=1,k=a;
	if(a<=1){
		cout << "fectorial of " << a << " is " << j << endl; 
	}
	else {
		b :
		j = j*a;	
		a--;
		if(a>1)
		{
			goto b;
		}
		else
		{
			cout << "fectorial of " << a << " is " << j << endl; 
		}
	}
}
