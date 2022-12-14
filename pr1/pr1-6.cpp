#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int i,j,a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		cout << "Enter a_" << i << " : ";
		cin >> a[i];
	}
	cout << "----------------------------------" << endl;
	for(i=0;i<n;i++)
	{
		b[i] = a[i] * a[i] * a[i];
	}
	for(i=0;i<n;i++)
	{
		cout << a[i] << "_cube : " << b[i] << endl;
	}
	
	
}
