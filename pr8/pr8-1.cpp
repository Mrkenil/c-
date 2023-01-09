#include <iostream>

using namespace std;

class Garage{
public:
  Garage() {
    try {
    	
    } catch (string e) {
      throw e ;
    }
  }
 
};
class Motor :public Garage{
	string Folt = "Car that is having troubles with its Motor";
public:
  Motor() {
    throw  Folt;
    Garage();
  }
};


int main() {
	
  try{
  	Motor a;
  } 
  catch (string e) {
    cout << "Error initializing from Garage: " << e << endl;
  }

  return 0;
}

