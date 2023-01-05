#include<iostream>
using namespace std;

class Area{
	double h , b, r, w, l;
	protected:
		virtual void Entry(double a, int b, char c) = 0;
		
		void A_c(){
			cout << endl << "-------------------" << endl;
			cout << "Enter radius of circle : ";
			cin  >> r;
			
			cout << endl << "Area of circal is pi*r^2 : " << (3.14)*(r*r) << endl; 
		} 
		void A_t(){
			cout << endl << "-------------------" << endl;
			cout << "Enter base of Triangle : ";
			cin  >> b;
			cout << "Enter height of Triangle : ";
			cin  >> h;
			
			cout << endl <<"Area of Triangle is 1/2*bh : " << (1/2)*(b*h) << endl;
		}
		void A_r(){
			cout << endl << "-------------------" << endl;
			cout << "Enter length of Rectangal : ";
			cin  >> l;
			cout << "Enter width of Rectangle : ";
			cin  >> w;
			
			cout << endl << "Area of Rectangle is l*h : " << l*w << endl;
		}	
};

class perform : public Area{
	public:
		void Entry(double k, int e, char n){
			cout << "now you can use those method...." << endl; 
		}
		void Start(){
			int a;
			cout << "Press 1 for Area of circal...." << endl
				 << "press 2 for Area of triangle...." << endl
				 << "press 3 for Area of Rectangle..." << endl
				 << "Enter your choice.. : ";
			cin	 >> a;
			
			switch(a){
				case 1 : A_c();
						 break;
				
				case 2 : A_t();
						 break;
				
				case 3 : A_r();
						 break;
				
				default :
					cout << "invaled choice...." << endl;
			}
			
		}
};

int main(){
	perform a;
	
	a.Start();
}
