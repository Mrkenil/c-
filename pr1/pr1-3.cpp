#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char a[100];
	
	cout << "Enter a string : ";
	cin >> a;
	
	int i;
    for(i=0;i<strlen(a);i++)
    {
    	if(a[i]>=65 && a[i]<=90)
    	{
    		a[i]+=32;
		}
		else if(a[i]>=97 && a[i]<=122)
    	{
    		a[i]-=32;
		}
	}
	cout << a;
}
