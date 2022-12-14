#include<iostream>
using namespace std;
inline void swap(int*,int*);
int main(){
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n],b[n],i;
	int *k[n],*p[n];
	for(i=0;i<n;i++)
	{
		cout << "Enter a_" << i << " : ";
		cin >> a[i];
	}
	cout << endl << "-------------------------------------" << endl;
	for(i=0;i<n;i++)
	{
		cout << "Enter b_" << i << " : ";
		cin >> b[i];
	}
	
	for(i=0;i<n;i++)
	{
		k[i] = &a[i];
		p[i] = &b[i];
	}
	
	for(i=0;i<n;i++)
	{
		swap(*k[i],*p[i]);
	}
	for(i=0;i<n;i++)
	{
		cout << "array a : " << a[i] << " array b : " << b[i] << endl;
	}
}

inline void swap(int *a,int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
