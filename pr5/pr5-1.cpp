#include<iostream>
using namespace std;

class Shape{
	protected:
		double width,height;
	public :
		Shape(){
			cout << "Enter width : ";
			cin  >> width;
			cout << "Enter height : ";
			cin  >> height;
		}
};
class triangle : public Shape{
	double AT;
	public :
		void area(){
			AT = (height*width) / 2;
			
			cout << "area of triangle : " << AT << endl;
		}
};
class rectangle : public Shape{
	double AR;
	public :
		void area(){
			AR = (height*width);
			
			cout << "area of rectangle : " << AR << endl;
		}
};

int main(){
	triangle a; 
	rectangle b;
	
	a.area();
	b.area();
	
}
