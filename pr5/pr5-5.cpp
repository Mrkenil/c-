#include<iostream>
using namespace std;

class Num{
	protected:
		int a;
	public:
		Num(){
			cout << "Enter any number : ";
			cin  >> a;
		} 			
};
class square : public Num{
	long long int sq;
	public :
		void sqar(){
			sq = a * a;
			
			cout << "square of your Enter number : " << sq << endl;  
		}		
};
class cube : public Num{
	long long int cu;
	public :
		void cub(){
			cu = a * a * a;
			
			cout << "cube of your Enter number : " << cu << endl;  
		}
};

int main(){
	square a;
	cube b;
	
	a.sqar();
	b.cub();
}
