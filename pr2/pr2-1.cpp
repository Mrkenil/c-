#include<iostream>

using namespace std;
void avr(int,int);
int sum(int,int,int);
int main(){
	int mat, sci, com,a;
	
	cout << "Enter match marks : ";
	cin >> mat;
	
	cout << "Enter match marks : ";
	cin >> sci;
	
	cout << "Enter match marks : ";
	cin >> com;
	
	cout << "How many subject marks you enter : ";
	cin >> a;
	  
	avr(sum(mat,sci,com),a); 
}

int sum(int a,int b,int c){
	int k ;
	k = a + b + c;
	return k;
}
void avr(int a,int n){
	int k = a / n;
	cout << "avrej : " << k;
}
