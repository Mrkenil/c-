#include<iostream>
using namespace std;

ostream &t(ostream &output){
	return output << "\t";
}

int main() { 
	
	int i;
	
	for(i=2020;i<=3030;i++)
	{
		if(i%4==0)
		{
		    cout << i << t;
		}
	}
	
	
	
}
