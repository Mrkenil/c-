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
	for(i=0;i<n;i++)
	{
		for(j=0;j<a[i];j++)
		{
			if(j*j==a[i])
			{
				b[i] = j;
				break;
			}
			else
			{
				b[i] = 0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout << a[i] << "_sqare root : " << b[i] << endl;
	}
	
	
}
