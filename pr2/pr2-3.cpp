#include<iostream>

using namespace std;

int fact(int a){
	if(a<=1){
		return 1;
	}else {
		return a * fact(a-1);
	}
}

int main(){
	
	int n,k;
	
	cout << "Enter any number : ";
	cin >> n;
	
	k = fact(n);
	
	cout << k << " is factorial of " << n << endl;
}
