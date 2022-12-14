#include<iostream>

using namespace std;
inline void swap(int,int);
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
	cout << endl << "-------------------------" << endl;
	for(i=0;i<n;i++)
	{
		cout << "Enter b_" << i << " : ";
		cin >> b[i];
	}
	
	for(i=0;i<n;i++)
	{
		swap(a[i],b[i]);
	}
}

inline void swap(int a,int b){
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "array a : " << a << " array b : " << b << endl;
}
