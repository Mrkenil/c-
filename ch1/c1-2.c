#include<iostream>
using namespace std;

int main(){
	char a[100];
	
	cout << "Enter string : ";
	cin << a;
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=65 && a[i]<=90 && i!=0)
    	{    
	    	{
	    		a[i] +=32;
	    	}	
	    }
		else if(a[i]>=97 && a[i]<=122)
		{
			if(i==0)
     		{
	     	    a[i] -=32;				 
			}
        }	
    }
    cout << "Toggalcase : " << a;
}
