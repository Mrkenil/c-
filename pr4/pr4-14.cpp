#include <iostream>
using namespace std;
     
class Market {
public:

    void Verify() {
        Market m;
        string id = "admin";
        int pass = 143143; 
	
        string oid;
        int password;

        cout << "Please Enter admin And 143143" << endl << endl;
        cout << "Enter user id : ";
        cin >> oid;
        cout << "Enter pasword : ";
        cin >> password;

        if(id == oid && pass == password) {
            cout << "Login Successful";
        }
        else {
            cout << "Enter correct password or user id as per we say" << endl;
            m.Verify();
        }

    }

        int ino;
        string iname;
        int q;
        int t;
        int d;

    void inputdata() {
        cout << "Enter item Number : ";
        cin >> ino;
        cout << "Enter item Name : ";
        cin >> iname;
        cout << "Enter item Quantity : ";
        cin >> q;
        cout << "Enter Tax : ";
        cin >> t;
        cout << "Enter Discount : ";
        cin >> d;

    }
    
    void Header() {
		system("cls");
    	cout << endl << "No." << "\t" << "NAME " << "\t" << "QUANTITY" << " TAX" << "\t" << "DISCOUNT" << endl;
        cout << "------" << "\t" << "-----" << "\t" << "--------"<< " -------" << " -------" << endl;
	}

    void outputdata() {

    	cout << ino << "\t" << iname << "\t " << q << "\t " << t << "\t" << d << endl;
    }

   
};

int main()
{
    Market m[20];
    
    m[0].Verify();

    int n;
    
    cout << endl << "How many item want you purchase ? : ";
    cin >> n;

    for(int i=0; i<n; i++) {
        cout << endl << endl;
        m[i].inputdata();
    }

    Market temp;
    for(int i=0; i<n; i++) {
        
		for(int j=i+1;j<n;j++) {
          
		    if(m[i].ino > m[j].ino) {
          
		        temp = m[i];
            
			    m[i] = m[j];
            
			    m[j] = temp;
            }
        }
    }
   
    m[0].Header();

    for(int i=0; i<n; i++) {
       
	    cout << endl << endl;
      
	    m[i].outputdata();
    }

}
