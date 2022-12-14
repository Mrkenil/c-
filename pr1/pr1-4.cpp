#include<iostream>
using namespace std;

int main(){
	
	char a;
	
	cout << "Enter character : ";
	cin >> a;
	
	if(a=='a'||a=='U'||a=='O'||a=='I'||a=='E'||a=='a'||a=='u'||a=='o'||a=='i'||a=='e')
	{
		cout << "vowal";
	}else if((a>=65&&a<=90)||(a>=97&&a<=122)){
		cout << "consonant";
	}else{
		cout << "sp_character";
	}
	
}
