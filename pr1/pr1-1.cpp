#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char a[100];
	
	cout << "Enter a string : ";
	cin >> a;
	
	int i,j=0;
	cout << a << endl;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i] >= 48 && a[i] <= 56)
		{
			j++;
			cout << "string is numerical";
			break;
		}
	}
	if(j==0)
	{
		cout << "not numerical";
	}
}
