#include<iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		cout << "Enter Element " << i << ":";
		cin >> a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0){
			cout << a[i] << endl; 
		}
	}
}
